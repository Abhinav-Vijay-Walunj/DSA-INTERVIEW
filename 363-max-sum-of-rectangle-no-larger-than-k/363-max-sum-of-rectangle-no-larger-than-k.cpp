class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
         int final_res=INT_MIN;
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                // Prefix Sum Calculated
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        
        // Maintaining the window l-->start and r-->end
        for(int l=0;l<m;l++){
            for(int r=l;r<m;r++){
                set<int> st={0};
                //st.insert(0);
                
                // Prefix sum variable
                int p_sum1=0;
                
                // loop for considering the current width of the rectangle
                for(int i=0;i<n;i++){
                    int sum2=matrix[i][r];
                    if(l>0){
                        sum2=sum2-matrix[i][l-1];
                    }
                    
                    p_sum1=p_sum1 + sum2;
                    
                    int var = p_sum1-k;
                    
					// Lower Bound Calculated
                    auto it = st.lower_bound(var);
                    
                    if(it!=st.end()){
                        int tmp=p_sum1-(*it);
                    // updating the final res if it is maximum than the previous one
                        final_res = max(final_res,tmp);
                    }
                    
                    st.insert(p_sum1);
                }
            }
        }
        
        return final_res;
    }
};
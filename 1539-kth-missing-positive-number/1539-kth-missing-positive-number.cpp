class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int m=0,prev_m;
        int prev=0;
        int i;
        int n=arr.size();
        for (i=0 ; i<n ; i++)
        {
            prev_m = m;
            m+=arr[i]-prev-1;            
            if (m>=k)
            {
                int d = k-prev_m;
                return prev+d;
            }
            prev=arr[i];
        }    
        
        return n+k;
        
        
    }
};
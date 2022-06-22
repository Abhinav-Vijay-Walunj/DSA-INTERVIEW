class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int t,n=matrix[0].size();
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
            }
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size(),sum=0,f=0;
        if(n%2 != 0)
        {
            
            f=mat[(n/2)][(n/2)];
        }
        for(int i=0;i<n;i++)
        {
            sum+=mat[i][i];
            sum+=mat[i][n-i-1];
        }
        sum=sum-f;
        return sum;
        }
};
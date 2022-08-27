class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int ans=0;
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(grid[i][j]<0)
                    ans++;
                else
                {
                    break;
                }
            }
            
        }
        return ans;
    }
};
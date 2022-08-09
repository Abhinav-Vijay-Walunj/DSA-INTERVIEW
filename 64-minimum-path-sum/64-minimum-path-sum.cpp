class Solution {
public:
    int mod=(int)1e9+7;
    
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();// row
	int n = grid[0].size(); // column
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 && j != 0) {
				grid[i][j] = grid[i][j] + grid[i][j - 1];
			} else if (i != 0 && j == 0) {
				grid[i][j] = grid[i][j] + grid[i - 1][j];
			} else if (i == 0 && j == 0) {
				grid[i][j] = grid[i][j];
			} else {
				grid[i][j] = min(grid[i][j - 1], grid[i - 1][j])
						+ grid[i][j];
			}
		}
	}

	return grid[m - 1][n - 1];
        /*
        int m=grid.size(),n=grid[0].size();
        // int dp[m+1][n+1];
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i == 0 && j != 0)
                {
                    grid[i][j]=(grid[i][j]+grid[i][j-1])%mod;
                }
                else if(i != 0 && j == 0)
                {
                    grid[i][j]=(grid[i][j]+grid[i-1][j])%mod;
                }
                else if(i == 0 && j == 0)
                {
                    grid[i][j]=grid[i][j]%mod;
                }
                else
                {
                    grid[i][j]=(min(grid[i-1][j],grid[i][j-1])%mod+grid[i-1][j-1]%mod)%mod;
                }
            }
        }
        return grid[m-1][n-1]-1;
        */
    }
};
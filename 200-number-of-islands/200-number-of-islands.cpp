class Solution {
public:
    bool isValid(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        if (
            row >= 0 && 
            row < n &&
            col >= 0 &&
            col < m &&
            vis[row][col] == 0 &&
            grid[row][col] == '1'
        ) {
            return true;
        }
        
        return false;
    }
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid) {
        vis[row][col] = 1;
        
        if (isValid(row + 1, col, vis, grid)) {
            dfs(row + 1, col, vis, grid);
        }
        
        if (isValid(row - 1, col, vis, grid)) {
            dfs(row - 1, col, vis, grid);
        }
        
        if (isValid(row, col + 1, vis, grid)) {
            dfs(row, col + 1, vis, grid);
        }
        
        if (isValid(row, col - 1, vis, grid)) {
            dfs(row, col - 1, vis, grid);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        int islands = 0;
        
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (!vis[row][col] && grid[row][col] == '1') {
                    dfs(row, col, vis, grid);
                    islands++;
                }
            }
        }
        
        return islands;
    }
};
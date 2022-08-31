class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& h, vector<vector<int>>& ocn, vector<int> &dx, vector<int> &dy) {
        ocn[i][j] = 1;
        for(int p=0; p<4; p++) {
            int x = i + dx[p], y = j + dy[p];
            if(x >= 0 && x < h.size() && y >= 0 && y < h[0].size() && !ocn[x][y] && h[i][j] <= h[x][y])
                dfs(x, y, h, ocn, dx, dy);
        }
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size(), m = heights[0].size();
        
        vector<vector<int>> po(n, vector<int>(m, 0)), ao(n, vector<int>(m, 0)), ans;
        vector<int> dx = {-1, 0, 1, 0}, dy = {0, 1, 0, -1};
        
        for(int i=0; i<m; i++) dfs(0, i, heights, po, dx, dy);
        for(int i=0; i<n; i++) dfs(i, 0, heights, po, dx, dy);
        for(int i=0; i<m; i++) dfs(n - 1, i, heights, ao, dx, dy);
        for(int i=0; i<n; i++) dfs(i, m - 1, heights, ao, dx, dy);
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++)
                if(po[i][j] && ao[i][j]) ans.push_back({i, j});
        }
        return ans;
    }
};
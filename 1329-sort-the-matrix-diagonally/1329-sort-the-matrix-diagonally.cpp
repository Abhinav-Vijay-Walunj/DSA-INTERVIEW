class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==0 || j==0){
                    int x = i, y = j;
                    priority_queue <int, vector<int>, greater<int>> pq;
                    while(x<n && y<m){
                        pq.push(mat[x][y]);
                        x++;
                        y++;
                    }
                    x=i, y=j;
                    while(x<n && y<m){
                        mat[x][y] = pq.top();
                        pq.pop();
                        x++, y++;
                    }
                }
            }
        }
        return mat;
    }
};
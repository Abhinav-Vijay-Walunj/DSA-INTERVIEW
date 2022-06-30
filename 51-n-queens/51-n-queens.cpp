class Solution {
public:
    void solve(int col,vector<string>& board,vector<vector<string>>& ans,vector<int>& lrow,vector<int>& udag,vector<int>& ldag,int n)
    {
        if(col == n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(lrow[row] == 0 && ldag[row+col] == 0 && udag[n-1+col-row] == 0)
            {
                board[row][col] ='Q';
                lrow[row]=1;
                ldag[row+col]=1;
                udag[n-1+col-row]=1;
                solve(col+1,board,ans,lrow,udag,ldag,n);
                board[row][col] ='.';
                lrow[row]=0;
                ldag[row+col]=0;
                udag[n-1+col-row]=0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        vector<int> lrow(n,0),udag(2*n-1),ldag(2*n-1,0);
        solve(0,board,ans,lrow,udag,ldag,n);
        return ans;
         
    }
};
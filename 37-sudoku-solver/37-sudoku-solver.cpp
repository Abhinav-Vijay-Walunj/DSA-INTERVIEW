class Solution {
public:
    
    bool safe(vector<vector<char>>& board,int r,int co,char c)
    {
        for(int i=0;i<9;i++)
        {
            if(board[r][i] == c)
                return false;
            if(board[i][co] == c)
                return false;
            
            if(board[3*(r/3)+i/3][3*(co/3)+i%3] == c)
            {
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board)
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j] == '.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(safe(board,i,j,c))
                        {
                            board[i][j]=c;
                            
                            if(solve(board))
                                return true;
                            else
                                board[i][j]='.';
                    
                        }
                    }
                
                return false;
                }
            }
        }
        return true;
    }
    
        void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
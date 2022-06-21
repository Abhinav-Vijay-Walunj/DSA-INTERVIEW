class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         bool RowZero = false;
        bool ColZero = false;
        for (int i = 0; i < matrix[0].size(); i++) //check the first row
        { 
            if (matrix[0][i] == 0) 
            {
                RowZero = true;
                break;
            } 
        }
        for (int i = 0; i < matrix.size(); i++) //check the first column
        { 
            if (matrix[i][0] == 0) 
            {
                ColZero = true;
                break;
            } 
        }
        for (int i = 1; i < matrix.size(); i++) //check except the first row and column
        { 
            for (int j = 1; j < matrix[0].size(); j++) 
            {    
                if (matrix[i][j] == 0) 
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }        
            }
        }
        for (int i = 1; i < matrix.size(); i++) //process except the first row and column 
        {
           for (int j = 1; j < matrix[0].size(); j++)
           {
               if (matrix[i][0] == 0 || matrix[0][j] == 0)
               {
                   matrix[i][j] = 0;
           
               }
           }
        }
        if(RowZero) //handle the first row
        { 
            for (int i = 0; i < matrix[0].size(); i++) 
            {
                matrix[0][i] = 0;
            }
        }
        if (ColZero) //handle the first column
        { 
            for (int i = 0; i < matrix.size(); i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
        /*
        int colo=-1,m=matrix.size(),n=matrix[0].size();
        
        for(int i=0;i<n;i++)
        {
            if(matrix[0][i] == 0)
            {
                colo=0;
            }
        }
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0] == 0)
            {
                colo=1;
            }
            for(int j=0;j<n;j++)
            {
                
                if(matrix[i][j] == 0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
            
        }
        for(int i=0;i<m;i++)
        {   
            for(int j=0;j<n;j++)
            {
        
                if(matrix[i][0] == 0 || matrix[0][j]==0)
                {
                    matrix[i][j] = 0;
                }
                
            }
            
        }
        if(colo == 1)
        {
            for(int i=0;i<n;i++)
            {
                matrix[i][0]=0;
            }
        }
                
                    
                
        if(colo == 0)
        {
            for(int i=0;i<m;i++)
            {
                matrix[0][i] = 0;
            }
        }
        
    }*/
};
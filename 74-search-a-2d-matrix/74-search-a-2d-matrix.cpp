class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int s=0,n=matrix.size(),m=matrix[0].size(),e=m*n-1,mid;
        
        
        while(s <= e)
        {
            mid=s+(e-s)/2;
            if(matrix[mid/m][mid%m] == target)
            {
                return true;
            }
            else if(matrix[mid/m][mid%m] < target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
                
        }
        
        return false;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        /*
        
        
        // treat the matrix as an array, just taking care of indices
    // [0..n*m]
    // (row, col) -> row*n + col
    // i -> [i/n][i%n]
    if (matrix.empty() || matrix[0].empty())
    {
        return false;
    }
    int m = matrix.size(), n = matrix[0].size();
    int start = 0, end = m * n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int e = matrix[mid / n][mid % n];
        /*
            here mid/n show how many complete row do we have
            while mid % n is just that column doesn't overflow.
        
        if (target < e)
        {
            end = mid - 1;
        }
        else if (target > e)
        {
            start = mid + 1;
        }
        else
        {
            return true;
        }
    }
    return false;*/
    }
};
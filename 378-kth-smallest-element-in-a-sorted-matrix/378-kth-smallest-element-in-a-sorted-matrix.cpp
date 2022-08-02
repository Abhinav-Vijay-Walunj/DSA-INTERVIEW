class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> t;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                t.push_back(matrix[i][j]);
            }
        }
        sort(t.begin(),t.end());
        
        return t[k-1];
    }
};
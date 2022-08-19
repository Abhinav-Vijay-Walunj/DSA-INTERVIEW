class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> v;
        vector<vector<int>> a;
    if(mat.size()*mat[0].size() != r*c)
        return mat;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                v.push_back(mat[i][j]);
            }
        }
        int k=0;
        vector<int> t;
        for(int i=0;i<r;i++)
        {
            
            for(int j=0;j<c;j++)
            {
                t.push_back(v[k]);
                k++;
            }
            a.push_back(t);
            t.clear();
        }
        return a;
    }
};
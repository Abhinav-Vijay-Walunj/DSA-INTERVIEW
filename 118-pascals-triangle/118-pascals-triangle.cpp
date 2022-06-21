class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>> v(num);
        
        // vector<int> t1;
        for(int i=0;i<num;i++)
        {
            v[i].resize(i+1);
            v[i][0]=v[i][i]=1;
            // t1.push_back(1);
            for(int j=1;j < i;j++)
            {
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
//             to get output for ith index it is r-1 C c-1
        }
        return v;
    }
};
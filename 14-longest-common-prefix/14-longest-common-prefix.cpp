class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        char t;
        for(int i=0;i<strs[0].size();i++)
        {
            t=strs[0][i];
            for(int j=0;j<strs.size();j++)
            {
                if(strs[0][i] != strs[j][i])
                {
                    return res;
                }
            }
            res+=t;
        }
        return res;
    }
};
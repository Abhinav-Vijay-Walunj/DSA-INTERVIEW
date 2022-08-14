class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int> m1,m2;
        
        int m=words1.size(),n=words2.size();
        int ans=0;
        for(int i=0;i<m;i++)
        {
            m1[words1[i]]++;
        }
        for(int j=0;j<n;j++)
        {
            m2[words2[j]]++;
        }
        for(string i:words2)
        {
            if(m1[i] == 1 && m2[i] == 1)
            {
                ans++;
            }
            
        }
       return ans;
    }
};
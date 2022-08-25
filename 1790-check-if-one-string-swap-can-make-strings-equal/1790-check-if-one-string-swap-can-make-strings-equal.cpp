class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int m=s1.size(),n=s2.size(),k=0,f=0;
        
        if(m != n)
            return false;
        for(int i=0;i<n;i++)
        {
            if(s1[i] != s2[i])
                k++;
        }
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[s1[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            mp[s2[i]]--;
        }
        for(auto i:mp)
        {
            if(i.second != 0)
            {
                f=1;
                break;
            }
        }
        if((k == 2 || k == 0) && f == 0)
            return true;
        return false;
    }
};
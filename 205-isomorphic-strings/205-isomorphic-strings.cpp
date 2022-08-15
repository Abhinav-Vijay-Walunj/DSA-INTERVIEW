class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp1;
        map<char,bool> mp2;
        int m=s.size(),n=t.size();
        if(m != n)
            return false;
        
        
        for(int i=0;i<n;i++)
        {            
            if(mp1.find(s[i]) == mp1.end() && mp2.find(t[i]) == mp2.end())
            {
                mp1[s[i]]=t[i];
                mp2[t[i]]=true;
            }
            else if(mp1[s[i]] == t[i])
            {
                continue;
            }
            else
            {
                return false;
            }
                
        }
        
        return true;
    }
};
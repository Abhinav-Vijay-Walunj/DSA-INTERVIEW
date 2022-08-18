class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        if(mp.size() == 1)
            return s.size();
        int ans=0,f=0;
        for(auto i:mp)
        {
            if(i.second%2 == 0)
            {
                ans+=i.second;
            }
            if(i.second%2 != 0)
            {
                f=1;
                ans+=(i.second-1);
            }
        }
        return ans+f;
    }
};
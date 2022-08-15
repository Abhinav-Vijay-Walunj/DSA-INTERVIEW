class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<char,int> mp;
        
        mp['I'] = 1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        char prev=s[0];
        ans+=mp[prev];
        for(int i=1;i<s.size();i++)
        {
            if(mp[s[i]]>mp[prev])
            {
                ans-=2*mp[prev];
            }
            ans+=mp[s[i]];
            prev=s[i];
        }
        return ans;
    }
};
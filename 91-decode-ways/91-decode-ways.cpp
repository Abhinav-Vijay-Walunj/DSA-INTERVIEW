class Solution {
public:
    int solve(int ind,string s)
    {
        if(ind == s.size())
            return 1;
        if(ind>s.size())
            return 0;
        if(s[ind]-'0'>2)
            return solve(ind+1,s);
        else if(s[ind+1] == '0')
            return solve(ind+2,s);
        else
            return (solve(ind+1,s)+solve(ind+2,s));
        // return 
    }
    int numDecodings(string s) {
        int n=s.size();
        
        vector<int> dp(n+1,0);
        dp[n]=1;
        for(int i=n-1;i>=0;--i)
        {
            if(s[i] != '0')
                dp[i]+=dp[i+1];
            if(i+1<n && (s[i] == '1' || s[i] == '2' && s[i+1]<='6' ))
                dp[i]+=dp[i+2];
        }
        
        return dp[0];
    }
};
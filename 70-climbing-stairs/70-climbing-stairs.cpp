class Solution {
public:
    int solve(int ind,vector<int>& dp)
    {
        if(ind <= 2)
        {
            return dp[ind]=ind;
        }
        if(dp[ind] != -1)
        {
            return dp[ind];
        }
        int a=solve(ind-1,dp);
        int b=solve(ind-2,dp);
        return dp[ind] = a+b;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
        /*
        // int dp[n+1]={-1};
        if(n <= 1)
        {
            return n;
        }
        
        
        return climbStairs(n-1)+climbStairs(n-2);
        
        
        int a=1,b=2;
        if(n == 1 || n == 2)
            return n;
        int result=0;
        for(int i=3;i<=n;i++)
        {
            result=a+b;
            a=b;
            b=result;
        }
        return result;  
      */  
    }
};
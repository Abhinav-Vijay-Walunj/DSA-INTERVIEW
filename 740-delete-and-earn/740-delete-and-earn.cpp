class Solution {
public:
    unordered_map<int,int>freq;
    int dp[10002];
    int maximum;
    int solve( int n)
    {
      if(n>maximum)
          return 0;
        if(dp[n]!=-1)
            return dp[n];
     return dp[n]=max(n*freq[n]+solve(n+2),solve(n+1));
        
       
    }
    int deleteAndEarn(vector<int>& nums) {
        freq.clear();
        maximum=0;
    
        for(int i=0;i<nums.size();i++)
        {  maximum=max(maximum,nums[i]);
            freq[nums[i]]++;
        }
        memset(dp,-1,sizeof(dp));
        return solve(1);
        
        
       
    }
};

/*class Solution {
public:
    int solve( unordered_map<int,int>dp,int n)
    {
        if(n==0)
            return 0;
        if(dp[n]==0)
             return solve( dp, n-1);
      int  ans= n*dp[n];
        dp[n-1]=0,dp[n+1]=0;
        return ans+=solve( dp, n-1);
       
    }
    int deleteAndEarn(vector<int>& nums) {
        
        unordered_map<int,int> dp;
        int maxNum=0;
        for(int i=0;i<nums.size();i++)
        { 
            dp[nums[i]]++;
        }
        int ans=0;
         
        for(auto &i:dp)
        {
            
       ans=  max(ans,solve(dp,i.first));
        
        }
        return ans;
    }
};
*/
class Solution {
public: 
        int dp[101];
    int solve(vector<int>&nums,int pos)
    {
        if(pos>=nums.size())
             return 0;
        if(dp[pos]!=-1)
            return dp[pos];
      return  dp[pos]=max(nums[pos]+solve(nums,pos+2),solve(nums,pos+1));
    }
    int rob(vector<int>& nums) {
        int n=nums.size(),k=0;
        if(n == 1)
            return nums[0];
        if(n == 2)
            return max(nums[0],nums[1]);
        for(int i=0;i<n;i++)
            dp[i]=-1;
        
        k=solve(nums,1);
        nums.pop_back();
        for(int i=0;i<n;i++)
            dp[i]=-1;
        int j=solve(nums,0);
        return max(j,k);
        
        //return solve(nums,1);
        
    }
    
};
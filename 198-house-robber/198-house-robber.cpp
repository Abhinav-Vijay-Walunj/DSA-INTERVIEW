class Solution {
public:
    
        // int dp[101];
    int solve(vector<int>&nums,int pos,vector<int>& dp)
    {
        if(pos>=nums.size())
             return 0;
        if(dp[pos]!=-1)
            return dp[pos];
      return  dp[pos]=max(nums[pos]+solve(nums,pos+2,dp),solve(nums,pos+1,dp));
    }
    int rob(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++)
        int n=nums.size();
           vector<int> dp(n,-1);
        
        return solve(nums,0,dp);
    }
        /*
        int n=nums.size(),val=0;
        int temp1=nums[0];
        if(n == 1)
            return temp1;
        int temp2=nums[1];
        if(n == 2)
            return max(temp1,temp2);
        for(int i=2;i<n;i++)
        {
            val=max(nums[i]+temp1,temp2);
            temp1=temp2;
            temp2=val;
        }
        return val;
    }
    */
};
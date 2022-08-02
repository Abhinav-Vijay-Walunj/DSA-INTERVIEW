class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        int maxi=INT_MIN;
        // int dp[n+1][n+1];
        vector<int> dp(n,1);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    dp[i]=max(dp[i],1+dp[j]);
                }
                // dp[i][j]=1;
            }
            maxi=max(maxi,dp[i]);
        }
        
        
        return maxi;
    }
};
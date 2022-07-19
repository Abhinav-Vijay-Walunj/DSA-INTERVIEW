class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int t=-1,ans=-1,cp=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<cp)
            {
                cp=nums[i];
            }
            t=nums[i]-cp;
            
            ans=max(ans,t);
        }
        if(ans == 0)
        {
            return -1;
        }
        return ans;
    }
};
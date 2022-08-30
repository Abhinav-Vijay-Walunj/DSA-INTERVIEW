class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int ans=-1,n=nums.size();
        if(n == 1)
        {
            ans=nums[0];
        }
        else if(nums[0]<nums[1] && nums[0]<nums[n-1])
        {
            ans=nums[0];
        }
        else if(nums[n-1]<nums[n-2])
        {
            ans=nums[n-1];
        }
        else
        {
            for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1])
            {
                ans=nums[i];
                break;
            }
        }
        }
        
        return ans;
       }
};
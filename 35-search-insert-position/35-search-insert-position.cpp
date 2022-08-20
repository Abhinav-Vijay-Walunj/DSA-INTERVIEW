class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e,mid,ans;
        int n=nums.size();
        e=n;
        
        if(target>nums[n-1])
            return n;
        else if(target<nums[0])
            return 0;
        
        while(s<e)
        {
            mid=s+(e-s)/2;
            if(nums[mid] == target)
            {
                ans=mid;
                break;
            }
            else if(nums[mid]<target && nums[mid+1]>target)
            {
                ans=mid+1;
                break;
            }
            else if(nums[mid]>target)
                e=mid;
            else
                s=mid+1;
        }
        return ans;
        
    }
};
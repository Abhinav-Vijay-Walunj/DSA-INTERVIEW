class Solution {
public:
    void solve(int ind,vector<int> nums,int* ans,int target)
    {
        if(ind == nums.size())
        {
            if(target == 0)
                ans++;
            return;
        }
        if(nums[ind]<=target)
        {
            target-=nums[ind];
            solve(ind,nums,ans,target);
            target+=nums[ind];
        }
            
        solve(ind+1,nums,ans,target);
        
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> result(target + 1);
        result[0] = 1;
        for (int i = 1; i <= target; ++i) {
            for (int x : nums) {
                if (i >= x) result[i] += result[i - x];
            }
        }
        
        return result[target];
        /*
        // vector<int> ds;
        int ans=0;
        solve(0,nums,&ans,target);
        return ans;*/
    }
};
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //vector<int> ans;
        int t=0;
        
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
            //ans.push_back(t);
        }
        return nums;
    }
};
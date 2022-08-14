class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int temp=0;
        for(int i=0;i<nums.size();i++)
        {
            temp+=nums[i];
            if(temp == sum-(temp-nums[i]))
            {
                return i;
            }
        }
        return -1;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
        // int s=0,e=nums.size()-1,sum;
        
        // sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        
        return res;
    }   
    
};
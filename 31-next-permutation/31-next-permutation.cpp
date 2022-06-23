class Solution {
public:
    
    
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
        /*
        int n=nums.size(),t,temp;
        int i=n-1;
        for(;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                t=i;
                temp=nums[i-1];
                break;
            }
        }
        if(i<1)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            for(int i=n-1;i>t;i--)
        {
            if(nums[i]>nums[t])
            {
                // i=t;
                break;
            }
        }
        }
        swap(nums[i],nums[t]);
        
        reverse(nums.begin() + t + 1,nums.end());
        
        */
    }
};
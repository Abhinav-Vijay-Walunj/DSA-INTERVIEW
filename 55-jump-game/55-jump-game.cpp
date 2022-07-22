class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n ==1)
            return true;
        if(nums[0] == 0)
            return false;

        int temp=nums[0];
        int k;
        for(int i=1;i<n;i++)
        {
            k =max(nums[i],temp-1);
            temp=k;
            if((k == 0)&&( i == n-1))
                return true;
            if(k <= 0)
                return false;
        
        }
        return true;
    }
};
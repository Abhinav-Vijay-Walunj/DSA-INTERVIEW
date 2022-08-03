class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n=nums.size(),ans=-1;
        for(int i=0;i<n;i++)
        {
            int cur=abs(nums[i]);
            if(nums[cur]<0)
            {
                ans=cur;
                break;
            }
            nums[cur]*=-1;  
            
                // return nums[i];
            
        }
        for(auto& i:nums)
            i=abs(i);
        
        return ans;
        /*
         int tortoise = nums[0];
        int hare = nums[0];

        do {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        // Find the "entrance" to the cycle.
        tortoise = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
       
        */
    }
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp=0,c=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            
            if(nums[i]==1)
            {
                c++;
                if(temp<c)
                    temp=c;
            }
            else
            {
                    c=0;
            
            }
                
        }
        return temp;
        
    }
};
#include<limits.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp=0,sum=INT_MIN;
        int n=nums.size();
    
        for(int i=0;i<n;i++)
        {
            
            temp = temp+ nums[i];
            if(sum<temp)
                sum=temp;
            if(temp<0)
                temp=0;
            
        }
        return sum;
        
    }
};
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int res=INT_MIN,temp=1,c=0;
        for(int i=0;i<n;i++)
        {
            temp=temp*nums[i];
            
            if(temp>res)
            {
                res=temp;
            }
            if(temp == 0)
            {
               temp=1;
                
            }
            
        }
        temp=1;
        for(int i=n-1;i>=0;i--)
        {
            temp=temp*nums[i];
            
            if(temp>res)
            {
                res=temp;
            }
            if(temp == 0)
            {
               temp=1;
                
            }
            
        }
        return res;
    }
};
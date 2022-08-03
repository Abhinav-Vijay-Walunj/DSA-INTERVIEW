class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0,n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 0)
                a++;
            else if(nums[i] == 1)
                b++;
            else
                c++;
        }
        for(int i=0;i<n;i++)
        {
            if(i<a)
            {
                nums[i]=0;
            }
            else if(i>=a && i<a+b)
                nums[i]=1;
            else
                nums[i]=2;
        }
    }
};
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                c++;
            }
            else if(nums[i]>0)
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if(b != 0)
            return 0;
        else if(c%2 != 0)
            return -1;
        else
            return 1;
    }
};
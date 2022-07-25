class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int framestart = -1, firstneg = -2, len = 0, neg = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] == 0) // reset everytime if zero
            {  
                neg = 0;framestart = i;firstneg = -2;
            } 
            else 
            {
                if (nums[i] < 0) neg++;  // number of negatives in  current frame means (frame excluding zero)
                if (neg == 1 && firstneg == -2) firstneg = i;   // init firstneg cnt neg;
                if (neg % 2 == 0) len = max(len, i - framestart);  //if curr cnt neg is framestart;
                else len = max(len, i - firstneg);  // first firstneg after last zero;
            }
        }
        return len;

        /*
        int n=nums.size();
        int temp=1,count=0,a1=0,a2=0;
        for(int i=0;i<n;i++)
        {
            temp=temp*nums[i];
            if(temp == 0)
            {
                temp=1;
                count=0;
            }
            if(nums[i]<0)
            {
                count++;
                a1=i;
            }
            if(nums[i]>0)
                count++;
                
        }
        //if(temp)
        return count;*/
    }
};
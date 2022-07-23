class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max_sum = nums[0], min_sum = nums[0], sum = nums[0], prev_min = nums[0], prev_max = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            sum += nums[i];
            
            prev_max = max(prev_max + nums[i], nums[i]);
            max_sum = max(max_sum, prev_max);
            
            prev_min = min(prev_min + nums[i], nums[i]);
            min_sum = min(min_sum, prev_min);
        }
        
        return sum == min_sum ? max_sum : max(max_sum, sum-min_sum);
        
        /*
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
        temp=sum;
        sum=INT_MAX;
        int t1=0;
        int res=0;
        
        for(int i=0;i<n;i++)
        {
            res=res+nums[i];
            t1 = t1+ nums[i];
            if(sum<t1)
                sum=t1;
            if(t1>0)
                t1=0;
            
        }
        //cout<<sum;
        t1=res-sum;
        if(temp>t1)
            return temp;
        return t1;
        */
    }
};
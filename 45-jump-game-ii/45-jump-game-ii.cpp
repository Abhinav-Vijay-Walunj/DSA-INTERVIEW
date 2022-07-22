class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        
        if(n == 1)
            return 0;
        int maxjmp=0;
        int s=0;
        int e=0;
        while(e<(n-1))
        {
            maxjmp++;
            int mxend=e+1;
            
            for(int i=s;i<=e;i++)
            {
                if(i+nums[i]>= n-1)
                    return maxjmp;
                mxend=max(mxend,i+nums[i]);
            }
            s=e+1;
            e=mxend;
            
        }
        return maxjmp;
    }
};
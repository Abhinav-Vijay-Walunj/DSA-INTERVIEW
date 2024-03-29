class Solution {
public:
    int mySqrt(int x) {
        long long int s=0,e=x,mid,ans;
        
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(mid*mid <= x)
            {
                ans=mid;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
        
        
    }
};
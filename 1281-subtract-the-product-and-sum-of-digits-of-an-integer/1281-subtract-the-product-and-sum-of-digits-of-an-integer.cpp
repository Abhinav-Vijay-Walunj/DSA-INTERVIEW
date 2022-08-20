class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans=0,t=n,product=1;
        
        while(n>0)
        {
            product*=(n%10);
            ans+=(n%10);
            n=n/10;
        }
        
        return (product-ans);
    }
};
class Solution {
public:
    int solve(int n)
    {
        int ans=0,temp;
        while(n)
        {
            temp=n%10;
            ans+=(temp*temp);
            n=n/10;
        }
        return ans;
    }
    bool isHappy(int n) {
       int s=n,f=n;
        do{
            s=solve(s);
            f=solve(solve(f));
        }while(s!=f);
        return s == 1;
        
        
    }
};
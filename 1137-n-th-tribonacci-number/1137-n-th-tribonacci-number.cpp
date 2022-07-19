class Solution {
public:
    int tribonacci(int n) {
        int a=0,b=1,c=1;
        
        int result=0;
        if(n == 0 || n == 1)
            return n;
        if(n == 2)
            return 1;
        
        for(int i=3;i<=n;i++)
        {
            result=a+b+c;
            a=b;
            b=c;
            c=result;
        }
        return result;
        
    }
};
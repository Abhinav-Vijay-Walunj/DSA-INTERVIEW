class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0,k=0;
        while(k<=c)
        {
            i++;
            k=i*i;
        }
        i=i-1;
        int j=0;
        while(j<=i)
        {
            k=i*i + j*j;
            if(k == c)
                return true;
            else if(k>c)
                i--;
            else if(k<c)
                j++;
        }
        return false;
        
        
    }
};
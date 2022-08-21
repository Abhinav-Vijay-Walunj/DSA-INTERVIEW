class Solution {
public:
    bool isPerfectSquare(int num) {
        if( num == 1)
            return true;
        int k=1,i=0,e=num;
        while(k <= e)
        {
            long long int m=k+(e-k)/2;
            if(m*m == num)
                return true;
            else if(m*m < num)
            {
                k=m+1;
            }
            else
            {
                e=m-1;
            }
    
        }
        return false;
        
    }
};
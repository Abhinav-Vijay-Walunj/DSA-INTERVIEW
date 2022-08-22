class Solution {
public:
    bool isPowerOfFour(int n) {
        
        int k;
        
        while(n>1)
        {
            if(n%4 != 0)
                return false;
            n=n/4;
        }
        if(n == 1)
            return true;
        return false;
        /*
        while(n>=4)
        {
            if(n%4 != 0)
                return false;
            n=n/4;
        }
        if(n%4!=0)
            return false;
        return true;
        
        if(n == 1)
            return true;
        
        if(n%4 == 0 && n>=4)
            isPowerOfFour(n/4);
        
        return false;
        */
        
        
    }
};
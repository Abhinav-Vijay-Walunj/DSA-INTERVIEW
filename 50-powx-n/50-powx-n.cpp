class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
  long long nn = n;
  if (nn < 0) nn = -1 * nn;
  while (nn) {
    if (nn % 2) {
      ans = ans * x;
      nn = nn - 1;
    } else {
      x = x * x;
      nn = nn / 2;
    }
  }
  if (n < 0) ans = (double)(1.0) / (double)(ans);
  return ans;
        /*
        double ans=1.0;
        unsigned long long t = n;
        
        if(t<0)
        {
            t = -1*n;
            
        }
    
        
        while(t)
        {
            if(t%2)
            {
                ans=ans*x;
                t--;
            }
            else
            {
                x = x*x;
                t=t/2;
            }
                
         }
        if(n<0)
        {
            ans=(double)(1.0)/(double)(ans);
        }
        
        return ans;
        
        /*
        
        
        double ans=1;
        int nn=0;
        if(n == 1 || x == 1)
        {
            return x;
        }
        if(n<0)
        {
            nn = n;
            n*=(-1);
        }
        while(n != 0)
        {
            ans=ans*x;
            n--;
        }
        if(nn != 0)
        {
            ans=(double)(1.0)/(double)(ans);
            return ans;
        }
        else
        {
            return ans;
        }
        */
    }
};
class Solution {
public:
    double average(vector<int>& salary) {
        double t=0;
        if(salary.size() <= 2)
            return t;
        
        int mn=min(salary[0],salary[1]),mx=max(salary[0],salary[1]);
        int n=salary.size(),f;
        
        for(int i=2;i<n;i++)
        {
            if(salary[i]<mn)
            {
                t+=mn;
                mn=salary[i];
            }
            else if(salary[i]>mx)
            {
                t+=mx;
                mx=salary[i];
            }
            else
                t+=salary[i];
                
            
//             f=0;
//             if(mn>salary[i])
//             {
//                 t=t+mn;
//                 mn=salary[i];
//                 t-=mn;
//                 f=1;
//             }
//             if(mx<salary[i])
//             {
//                 t=t+mn;
//                 mn=salary[i];
//                 t-=mn;
//                 f=1;
                
//                 // mx=salary[i];
//             }
//             if(f == 0)
//             {
//                 t+=salary[i];
//             }
            
        }
         // t-=(mx+mn);
        double ans= double(t/(n-2));
        return ans;
    }
};
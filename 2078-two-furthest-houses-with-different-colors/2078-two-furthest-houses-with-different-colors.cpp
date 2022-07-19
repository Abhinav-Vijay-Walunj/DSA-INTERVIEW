class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int s=0,e=colors.size()-1,ans=0,t;
       for(int i=0;i<e+1;i++)
       {
           for(int j=e;j>i;j--)
           {
               if(colors[i] != colors[j])
               {
                   t=j-i;
                   break;
               }
           }
           ans=max(ans,t);
       }
    return ans;
    }
};
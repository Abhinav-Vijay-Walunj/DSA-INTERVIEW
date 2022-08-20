class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int mxr=startFuel,cnt=0,ind=0;
        
        priority_queue<int> pq;
        
        while(mxr<target)
        {
            while(ind<stations.size() && stations[ind][0] <= mxr) 
            {
                pq.push(stations[ind][1]);
                ind++;
            }
                
          if(pq.empty())
              return -1;      
          mxr+=pq.top();
          pq.pop();
            cnt++;
        }
        return cnt;
    }
};
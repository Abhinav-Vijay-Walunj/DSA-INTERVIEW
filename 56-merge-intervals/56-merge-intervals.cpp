class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        vector<int> t;
        int s=intervals[0][0],e=intervals[0][1],n=intervals.size();
        for(int i=0;i<n;i++)
        {
            if(ans.empty() || ans.back()[1]<intervals[i][0])
            {
                vector<int> v={intervals[i][0],intervals[i][1]};
                ans.push_back(v);
                // continue;
            }
            else
            {
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
                // t.push_back(s);
                // t.push_back(e);
                // ans.push_back(t);
                // i++;
                // s=intervals[i][0];
                // e=intervals[i][1];
            }
        }
        return ans;
    }
};
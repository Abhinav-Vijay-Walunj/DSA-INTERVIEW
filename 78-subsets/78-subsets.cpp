class Solution {
public:
    
    void solve(int ind,int n,vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp)
    {
        if(ind == n)
        {
            
            ans.push_back(temp);
            return;
        }
         // temp.push_back(nums[ind]);
        solve(ind+1,n,nums,ans,temp);
        temp.push_back(nums[ind]);
        // temp.pop_back();
        solve(ind+1,n,nums,ans,temp);
       temp.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        int n = nums.size();
        solve(0,n,nums,ans,temp);
            /*
        int n = nums.size(), p = 1 << n;
        vector<vector<int>> subs(p);
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < n; j++) {
                if ((i >> j) & 1) {
                    subs[i].push_back(nums[j]);
                }
            }
        }*/
        return ans;
    }
        
    
};
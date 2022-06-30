class Solution {
public:
    
    void solve(vector<int>& nums,vector<int>& ds,vector<vector<int>>& ans,int frq[])
    {
        if(ds.size() == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!frq[i])
            {
                ds.push_back(nums[i]);
                frq[i]=1;
                solve(nums,ds,ans,frq);
                frq[i]=0;
                ds.pop_back();
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n=nums.size();
        int frq[n];
        for(int i=0;i<n;i++)
        {
            frq[i] = 0;
        }
        solve(nums,ds,ans,frq);
        return ans;
        
    }
};
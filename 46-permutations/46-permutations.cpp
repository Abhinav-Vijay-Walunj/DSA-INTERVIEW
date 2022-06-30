class Solution {
public:
    
    void solve(int ind,vector<int>& nums,vector<vector<int>>& ans)
    {
        if(ind == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[ind],nums[i]);
            solve(ind+1,nums,ans);
            swap(nums[ind],nums[i]);
        }
    }
//     void solve(vector<int>& nums,vector<int>& ds,vector<vector<int>>& ans,int frq[])
//     {
//         if(ds.size() == nums.size())
//         {
//             ans.push_back(ds);
//             return;
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             if(!frq[i])
//             {
//                 ds.push_back(nums[i]);
//                 frq[i]=1;
//                 solve(nums,ds,ans,frq);
//                 frq[i]=0;
//                 ds.pop_back();
//             }
//         }
        
//     }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        // vector<int> ds;
        // int n=nums.size();
        // int frq[n];
        // for(int i=0;i<n;i++)
        // {
        //     frq[i] = 0;
        // }
        // solve(nums,ds,ans,frq);
         solve(0,nums,ans);
        return ans;
        
    }
};
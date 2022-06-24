class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n1=-1,n2=-1,c1=0,c2=0,n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(n1 == nums[i])
            {
                c1++;
            }
            else if(n2 == nums[i])
            {
                c2++;
            }
            else if(c1 == 0)
            {
                n1=nums[i];
                c1=1;
            }
            else if(c2 == 0)
            {
                n2=nums[i];
                c2=1;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        vector<int> ans;
        
        c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == n1)
            {
                c1++;
            }
            else if(nums[i] == n2)
            {
                c2++;
            }
        }
        int t=floor(n/3);
        if(c1>t)
        {
            ans.push_back(n1);
        }
        if(c2>t)
        {
            ans.push_back(n2);
        }
return ans;
        /*
            int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                mp.insert(make_pair(nums[i],1));
            }
            else
            {
                mp[nums[i]]++;
            }
        }
        int t=floor(n/3);
        vector<int> v;
        for(auto x:mp)
        {
            if(x.second > t)
            {
                v.push_back(x.first);
            }
        }
        return v;*/
    }
};
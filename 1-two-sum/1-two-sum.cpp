class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); ++i) {

   	 if (mp.find(target - nums[i]) != mp.end()) {

   		 res.emplace_back(i);
   		 res.emplace_back(mp[target - nums[i]]);
   		 return res;
   	 }

   	 mp[nums[i]] = i;
    }

    return res;
        
/*
        int n=nums.size();
        vector<int> ans(2);
        vector <int> a;
        for(int i=0;i<n;i++)
        {
            a.push_back(nums[i]);
        }
        
        sort(a.begin(),a.end());
        
        int s=0,e=n-1,c,b;
        
        while(s<e)
        {
            if(a[s]+a[e] == target)
            {
                c=a[s];
                b=a[e];
                break;
            }
            else if(a[s]+a[e] > target)
            {
                e--;
            }
            else
            {
                s++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i] == c) 
            {
                ans.emplace_back(i);
            }
            else if(nums[i] == b)
            {
                ans.emplace_back(i);
            }
        }
        
        /*
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        while(i<j)
        {
            if(nums[i]+nums[j] == target)
            {
                a.push_back(i);
                a.push_back(j);
                break;
                
            }
            else if(nums[i]+nums[j] > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((target == (nums[i]+nums[j])))
                {
                    a.push_back(i);
                    a.push_back(j);
                }
            }
        }
        return ans;*/
    }   
    
};
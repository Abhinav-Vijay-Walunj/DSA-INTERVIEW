class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> cnt,end;
        
        for(int i=0;i<n;i++)
        {
            cnt[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(cnt[nums[i]]<=0)
                continue;
            cnt[nums[i]]--;
            if(end[nums[i]-1]>0)
            {
                end[nums[i]-1]--;
                end[nums[i]]++;
            }
            else if(cnt[nums[i]+1] && cnt[nums[i]+2])
            {
                cnt[nums[i]+1]--;
                cnt[nums[i]+2]--;
                end[nums[i]+2]++;
            }
            else
                return false;
        }
        return true;
    }
};
class Solution {
public:
    int solve(vector<int>& v,int m)
    {
        int cnt=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i] >= m)
                cnt++;
        }
        return cnt;
    }
    int specialArray(vector<int>& nums) {
        int n=nums.size(),t=INT_MAX;
        // sort(nums.begin(),nums.end());
        int s=0,e=100,mid,ans=-1;
        
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(solve(nums,mid) == mid)
            {
                return mid;
        
            }
            else if(solve(nums,mid)>mid)
                s=mid+1;
            else
                e=mid-1;
        }
        
        return -1;
    }
};
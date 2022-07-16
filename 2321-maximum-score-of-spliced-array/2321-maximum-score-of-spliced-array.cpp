class Solution {
public:
    
    typedef long long ll;
    int solve(vector<int>& nums1,vector<int>& nums2)
    {
        int s1=0;
        for(int i=0;i<nums1.size();i++)
        {
            s1+=nums1[i];
        }
        int curr=0,maxi=0;
        for(int i=0;i<nums1.size();i++)
        {
            curr+=(nums2[i]-nums1[i]);
            if(curr<0)
                curr = 0;
            maxi=max(curr,maxi);
        }
        return s1+maxi;
    
    }
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        
        return max(solve(nums1,nums2),solve(nums2,nums1));
    }
};
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,n=nums.size();
        int prf=0;
        vector<int> cprf(k);
        cprf[prf]++;//updateing frequency
        for(int i=0;i<n;i++)
        {
            prf=(prf+nums[i])%k;
            if(prf<0)
            {
                prf=k+prf;
            }
            ans+=cprf[prf];
            cprf[prf]++;
        }
            
        return ans;
    }
        
};
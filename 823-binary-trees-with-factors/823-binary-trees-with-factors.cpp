class Solution {
public:
    int mod=(int) 1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        int ans=arr.size();
        int res=0;
        sort(arr.begin(),arr.end());
        unordered_map<int,long> mp;
        
        for(int i=0;i<ans;i++)
        {
            mp[arr[i]]=1;
            for(int j=0;j<i;j++)
            {
                if(arr[i]%arr[j] == 0)
                {
                    mp[arr[i]]=(mp[arr[i]]+mp[arr[j]]*mp[arr[i]/arr[j]])%mod;
                }
            }
            res=(res+mp[arr[i]])%mod;
        }
        return res;
    }
};
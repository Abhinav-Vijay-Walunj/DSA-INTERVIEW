class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        vector<int> freq;
        
        for(auto i:mp)
        {
            freq.push_back(i.second);
        }
        
        sort(freq.begin(),freq.end());
        
        int ans=0,j=freq.size()-1,res=0;
        
        while(ans<(n/2))
        {
            ans+=freq[j];
            j--;
            res++;
        }
        return res;
    }
};
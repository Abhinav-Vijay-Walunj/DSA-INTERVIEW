class Solution {
public:/*
    void solve(int ind,string s,vector<string>& ans,vector<string>& ds)
    {
        if(ind >= s.size())
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(s[ind]);
        solve(ind+1,s,ans,ds);
        ds.pop_back(s[ind]);
        solve(ind-1,s,ans,ds);
        
    }*/
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans=0;
        vector<vector<int>> mapp(26);
        for(int i=0;i<s.size();i++)
        {
            mapp[s[i]-'a'].push_back(i);
        }
        for(auto& word : words) {
            bool found = true;
            // i = index in word | prev = index in s matched for word[i-1]
            for(int i = 0, prev = -1; found && i < size(word); i++) {
                auto& v = mapp[word[i]-'a'];
                auto it = upper_bound(begin(v), end(v), prev);   // check if current character exists in s with index > prev
                if(it == end(v)) found = false;                  // doesn't exist
                else prev = *it;                                 // update prev for next check
            }
            ans += found;
        }
        return ans;
    }
};
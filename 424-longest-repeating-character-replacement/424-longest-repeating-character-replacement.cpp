class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int j=0, ans=0;
        char maxchar='#';
        priority_queue<pair<int,char>> pq;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
            
            if(!pq.empty() and pq.top().second==s[i]){
                pq.pop();
                pq.push({mp[s[i]], s[i]});
            }else
                pq.push({mp[s[i]],s[i]});
            
            maxchar=pq.top().second;
            
            int len=i-j+1;
            while(len-mp[maxchar]>k){
                mp[s[j]]--;
                if(pq.top().second==s[j]){
                    pq.pop();
                    pq.push({mp[s[j]],s[j]});
                }
                maxchar=pq.top().second;
                j++;
                len=i-j+1;
            }
            ans=max(ans, len);
        }
        return ans;
        
        
            
        
        
    }
};
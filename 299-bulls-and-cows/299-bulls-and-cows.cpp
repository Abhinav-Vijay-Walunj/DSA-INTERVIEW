class Solution {
public:
    string getHint(string secret, string guess) {
        int a=0;
        unordered_map<char,int>s,g;
        
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                a++;
            }
            else{
                s[secret[i]]++;
                g[guess[i]]++;
            }
        }
        int b=0;
        for(auto [i,u]:s){
            b+=(min(u,g[i]));
        }
        string ans=to_string(a)+"A"+to_string(b)+"B";
        return ans;
        
    }
};
class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!='#'){
                ans+=96+s[i]-'0';
            }
            else{
                ans+=96+(s[i-1]-'0')+10*(s[i-2]-'0');
                i=i-2;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
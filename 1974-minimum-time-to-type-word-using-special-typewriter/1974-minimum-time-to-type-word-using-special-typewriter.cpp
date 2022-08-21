class Solution {
public:
    int minTimeToType(string word) {
        int ans=0;
        char pos='a';
        // ans+=(word[0]-'a');
        for(int i=0;i<word.size();i++)
        {
            int temp=min(abs(word[i]-pos),abs(26-abs(word[i]-pos)));
            ans+=(temp+1);
            pos=word[i];
        }
        return ans;
    }
};
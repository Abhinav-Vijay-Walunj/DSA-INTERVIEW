class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string code[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> st;
        
        for(string s:words)
        {
            string ans="";
            for(char c:s)
            {
                ans+=code[c-'a'];
            }
            st.insert(ans);
        }
        return st.size();
    }
};
class Solution {
public:
    bool checkSubstring(unordered_map<string, int> wordCount, string s, int wordLen) {
        for(int j=0; j<s.size(); j+=wordLen) {
            string w = s.substr(j, wordLen);
            if(wordCount.find(w) != wordCount.end()) {
                if(--wordCount[w] == -1) {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }
    
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        int len=words[0].size();
        int slen=s.size();
        int wordwindow=words.size()*len;
         unordered_map<string, int> wordCount;
        for(int i=0; i<words.size(); i++) {
            wordCount[words[i]]++;
        }
        
        int i = 0;
        while(i + wordwindow <= slen) {
            if(checkSubstring(wordCount, s.substr(i, wordwindow), len)) {
                res.push_back(i);
            }
            i++;
        }
        return res;
    }
};
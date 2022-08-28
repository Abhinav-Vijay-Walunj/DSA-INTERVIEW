class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> result;
        map<string, int> wordCounts;
        int maxCount = 0;
        
        for (string &s: words) maxCount = max(++wordCounts[s], maxCount);
        
        while (maxCount > 0 && k > 0) {
            for (auto it = wordCounts.begin(); it != wordCounts.end(); ++it) {
                if (it->second == maxCount) {
                    result.push_back(it->first);
                    if (--k == 0) break;
                }
            }
            --maxCount;
        }
        return result;
    }
};
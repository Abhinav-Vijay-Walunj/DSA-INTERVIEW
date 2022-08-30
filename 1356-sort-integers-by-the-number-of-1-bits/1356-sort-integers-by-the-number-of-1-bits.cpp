class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> temp(arr.size());
        vector<int> ans;
        for(int i=0; i< arr.size(); i++){
            temp[i].first = __builtin_popcount(arr[i]);
            temp[i].second = arr[i];
        }
        sort(temp.begin(), temp.end());
        for(int i=0; i<arr.size(); i++){
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};
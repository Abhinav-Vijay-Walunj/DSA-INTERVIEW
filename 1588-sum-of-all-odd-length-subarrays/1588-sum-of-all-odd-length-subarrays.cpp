class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
         vector<int> v(arr.size());
        v[0] = arr[0];
        for(int i=1; i<arr.size(); i++)
            v[i] = v[i-1]+ arr[i];
        int d=0, ans =0;
        while(d < arr.size()){
            ans += v[d];
            for(int i=1; i<v.size()- d; i++){
                ans += v[i+d] - v[i-1];
            }
            d += 2;
        }
        return ans;
    }
};
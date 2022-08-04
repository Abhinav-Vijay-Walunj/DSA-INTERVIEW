class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int ans=0;
        int total = 0;
        for (int i = 0; i < k; i++) 
            total += cardPoints[i];
        ans = total;
        for (int i = k - 1;i>=0; i--){
            total -= cardPoints[i];
            total+= cardPoints[n+i-k];
            ans = max(ans, total);
        }
        return ans;
    }
};
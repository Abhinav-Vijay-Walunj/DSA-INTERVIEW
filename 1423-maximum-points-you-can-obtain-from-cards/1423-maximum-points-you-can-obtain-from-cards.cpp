class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int ans=0;
        int total = 0;
        for (int i = 0; i < k; i++) 
            total += cardPoints[i];
        ans = total;
        for (int i = k - 1, j = n - 1; ~i; i--, j--)
            total += cardPoints[j] - cardPoints[i], ans = max(ans, total);
        return ans;
    }
};
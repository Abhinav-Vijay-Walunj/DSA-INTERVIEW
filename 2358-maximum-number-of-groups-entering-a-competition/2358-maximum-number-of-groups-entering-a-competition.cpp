class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int ans = 1;
        int t = grades.size();
        vector<int>dp(grades.size() + 1);
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 1; i <= t; i++){
            dp[i] = dp[i - 1] + i;
            if(dp[i] == t){   // sum == size of array
                return i;
            }else if(dp[i] > t){  // sum exceeding so i - 1 will we the answer
                return i - 1;
            }
        }
        return -1;
        /*
        int n=grades.size();
        if(n == 1 || n == 2)
            return 1;
        
        // sort(grades.begin(),grades.end());
        
        */
        
    }
};
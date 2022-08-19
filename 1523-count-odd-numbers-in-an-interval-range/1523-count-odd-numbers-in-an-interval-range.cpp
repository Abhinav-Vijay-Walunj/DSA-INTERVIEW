class Solution {
public:
    int countOdds(int low, int high) {
        int f=0;
        if(low%2 == 1 || high%2 == 1)
            f=1;
        return (high-low)/2+f;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
        int n=prices.size();
        // int t[n+1];
        int cp=prices[0],ans=0;
        
        for(int i=1;i<n;i++)
        {
            if(prices[i] > cp)
                ans+=(prices[i]-cp);
            
            cp=prices[i];
        }
        return ans;
    }
};
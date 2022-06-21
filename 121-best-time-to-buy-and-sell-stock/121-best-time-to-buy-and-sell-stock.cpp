class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp=prices[0],n=prices.size(),temp=0;
        
        for(int i=1;i<n;i++)
        {
            if((prices[i]-cp)>temp)
            {
                temp=(prices[i]-cp);
            }
            if(cp>prices[i])
            {
                cp=prices[i];
            }
            
        }
        return temp;
        
        
        /*
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        int temp=0;
        int min=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            else if(prices[i]-min>temp)
                temp=prices[i]-min;
        }
        return temp;
        */
    }
};
class Solution {
public:
    /*
    int solve(int ind,vector<int>& cost,vector<int>& dp)
    {
        if(ind == 0)
        {
            return dp[ind]=cost[ind];
        }
        if(ind<0)
        {
            return 0;
        }
        if(dp[ind] != INT_MAX)
            return dp[ind];
        int l=cost[ind]+solve(ind-1,cost,dp);
        int r=cost[ind]+solve(ind-2,cost,dp);
        
        return dp[ind]=min(l,r);
        
        if(pos>=cost.size())
             return 0;
        if(dp[pos]!=INT_MAX)
            return dp[pos];
        
            return dp[pos]=min(cost[pos]+solve(cost,pos+1),cost[pos]+solve(cost,pos+2));
        
    
    }
    int solver(int ind,vector<int>& cost,vector<int>& d)
    {
        if(ind == cost.size()-1)
        {
            return d[ind]=cost[ind];
        }
        if(ind>cost.size()-1)
        {
           return d[ind]= 0;
        }
        if(d[ind] != INT_MAX)
            return d[ind];
        int l=cost[ind]+solve(ind+1,cost,d);
        int r=cost[ind]+solve(ind+2,cost,d);
        
        return d[ind]=min(l,r);
        
        if(pos>=cost.size())
             return 0;
        if(dp[pos]!=INT_MAX)
            return dp[pos];
        
            return dp[pos]=min(cost[pos]+solve(cost,pos+1),cost[pos]+solve(cost,pos+2));
        
        */
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int dp[n];
        dp[0]=cost[0];
        dp[1]=cost[1];
        
        for(int i=2;i<n;i++)
        {
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
        /*
        int n=cost.size();
        vector<int> dp(n+1,INT_MAX);
        int a=solver(0,cost,dp);
        // vector<int> d(n,INT_MAX);
        for(int i=0;i<=n;i++)
        {
            dp[i]=INT_MAX;
        }
        int b=solver(1,cost,dp); 
        return min(a,b);
    }

        
        int val=0;
        int n=cost.size();
        int temp1=cost[0],temp2=cost[1];
        if(n==1)
            return temp1;
        if(n == 2)
            return min(temp1,temp2);
        for(int i=2;i<n;i++)
        {
            val=min(cost[i]+temp1,temp2);
            temp1=temp2;
            temp2=val;
        }
        return val;
        */
    
};


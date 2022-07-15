// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximum(int a,int b)
    {
        if(a>b)
            return a;
        return b;
        
    }
    int knapSack(int n, int W, int val[], int wt[])
    {
        int dp[W+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<=W;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(wt[j]<=i)
                {
                    dp[i] = max(dp[i], dp[i-wt[j]] + val[j]);
                }
            }
        }
        return dp[W];
        /*
        if(n == 0)
        {
            return W/(wt[0]*val[0]);
        }
        int not_take=0+knapSack(n-1,W,val,wt);
        int take=INT_MIN;
        if(wt[n-1]<=W)
        {
            take=val[n-1]+knapSack(n-1,W-wt[n-1],val,wt);
        }
        return max(take,not_take);
        
        int t[n+1][W+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=W;j++)
            {
                    t[i][j]=0;
                
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=W;j++)
            {
                if(wt[i-1]<=j)
                {
                    while(wt[i-1]<=j)
                    {
                        t[i][j] = maximum(val[i]+t[i][j-wt[i-1]],t[i-1][j]);
                        wt[i-1]-=j;
                        
                    }

                }
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[n][W];*/
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        int t[n + 1][W + 1]; // DP matrix

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= W; j++) {
			if (i == 0 || j == 0) // base case
				t[i][j] = 0;
			else if (wt[i - 1] <= j) { // current wt can fit in bag
				int val1 = val[i - 1] + t[i - 1][j - wt[i - 1]]; // take current wt
				int val2 = t[i - 1][j]; // skip current wt
				t[i][j] = max(val1, val2);
			}
			else if (wt[i - 1] > j) // current wt doesn't fit in bag
				t[i][j] = t[i - 1][j];
		}
	}

	return t[n][W];
        /*
        int t[n+1][W+1];
        
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<W+1;j++)
            {
                
                if(j == 0 || i == 0)
                {
                    t[i][j]=0;
                }
                
                else if(wt[i-1]<=j)
                {
                    t[i][j]=max((val[i-1]+t[i-1][j-(wt[i-1])]),(t[i-1][j]));
                }
                else if(wt[i-1]>j)
                {
                    t[i][j]=t[i-1][j];
                }
            }
            return t[n][W];*/
        
       // Your code here
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
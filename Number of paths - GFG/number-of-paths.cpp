// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
long long  numberOfPaths(int m, int n)
{
    if(m == 1 || n == 1)
    {
        return 1;
    }
    // long long ans=solve(m,n,0,0);
    return numberOfPaths(m-1,n)+numberOfPaths(m,n-1);
    
    
    // Code Here
}

long long solve(int m,int n,int i,int j)
{
    if(i>=m || i>= n)
    {
        return 0;
    }
    if(i == m-1 && j == n-1)
    {
        return 1;
    }
    
    return solve(m,n,i+1,j)+solve(m,n,i,j+1);
}
// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends
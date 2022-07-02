// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int kthLargest(vector<int> &arr,int n,int k){
        int sum[n + 1];
    sum[0] = 0;
    sum[1] = arr[0];
    for (int i = 2; i <= n; i++)
        sum[i] = sum[i - 1] + arr[i - 1];
 
    // priority_queue of min heap
    priority_queue<int, vector<int>, greater<int> > Q;
 
    // loop to calculate the contiguous subarray
    // sum position-wise
    for (int i = 1; i <= n; i++)
    {
 
        // loop to traverse all positions that
        // form contiguous subarray
        for (int j = i; j <= n; j++)
        {
            // calculates the contiguous subarray
            // sum from j to i index
            int x = sum[j] - sum[i - 1];
 
            // if queue has less then k elements,
            // then simply push it
            if (Q.size() < k)
                Q.push(x);
 
            else
            {
                // it the min heap has equal to
                // k elements then just check
                // if the largest kth element is
                // smaller than x then insert
                // else its of no use
                if (Q.top() < x)
                {
                    Q.pop();
                    Q.push(x);
                }
            }
        }
    }
 
    // the top element will be then kth
    // largest element
    return Q.top();
    }
};

// { Driver Code Starts.

int main(){
    
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N;
        cin>>K;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        int ans=ob.kthLargest(Arr,N,K);
        cout<<ans<<endl;
    }
    return 0;
}  // } Driver Code Ends
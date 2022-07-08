// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int countNumberswith4(int N) {
        if(N<4)
        {
            return 0;
        }
        int d=log10(N);
        int *a = new int[d+1];
        a[0]=0,a[1]=1;
        
        for(int i=2;i<=d;i++)
        {
            a[i]=a[i-1]*9+ceil(pow(10,i-1));
        }
        int p=ceil(pow(10,d));
        int msd=N/p;
        
        if (msd == 4)
            return (msd)*a[d] + (N%p) + 1;
            
         if (msd > 4)
            return (msd-1)*a[d] + p + countNumberswith4(N%p);
            
         return (msd)*a[d] + countNumberswith4(N%p);
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
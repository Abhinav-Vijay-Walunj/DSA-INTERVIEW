// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int ar[], int n)
    {
        int a=0,b=0,c=0;
        
        for(int i=0;i<n;i++)
        {
            if(ar[i] == 0)
            {
                a++;
            }
            else if(ar[i] == 1)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i<a)
            {
                ar[i] = 0;
            }
            else if(i >= a && i<a+b)
            {
                ar[i] = 1;
            }
            else
            {
                ar[i]=2;
            }
        }
        // code here 
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
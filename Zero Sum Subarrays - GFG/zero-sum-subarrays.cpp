// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        // create an empty map
    unordered_map<int, vector<int> > map;
 

 
    // Maintains sum of elements so far
    int sum = 0,count=0;
 
    for (int i = 0; i < n; i++)
    {
        // add current element to sum
        sum += arr[i];
 
        // if sum is 0, we found a subarray starting
        // from index 0 and ending at index i
        if (sum == 0)
            count++;
 
        // If sum already exists in the map there exists
        // at-least one subarray ending at index i with
        // 0 sum
        if (map.find(sum) != map.end())
        {
            // map[sum] stores starting index of all subarrays
            vector<int> vc = map[sum];
            for (auto it = vc.begin(); it != vc.end(); it++)
                count++;
        }
 
        // Important - no else
        map[sum].push_back(i);
    }
 
    // return output vector
    return count;
     //code here
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends
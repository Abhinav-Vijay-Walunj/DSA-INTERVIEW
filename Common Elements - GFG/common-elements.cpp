// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        vector<int> ans;
        unordered_map<int,int> a;
        unordered_map<int,int> b;
        
        for(int i=0;i<v1.size();i++)
        {
            a[v1[i]]++;
        }
        // for(int i=0;i<v2.size();i++)
        // {
        //     b[v2[i]]++;
        // }
        
        for(auto i:v2)
        {
            if(a.find(i) != a.end())
            {
                if(a[i] != 0)
                {
                    ans.push_back(i);
                    a[i]--;
                }
                // for(int j=1;j<=min(i.second,b[i.first]);j++)
                // {
                //     ans.push_back(i.first);
                // }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        // Your code here
    }
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}  // } Driver Code Ends
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string str)
{
    set<char> h; 
    string ans="";
    // Traverse the input array from left to right 
    for (int i=0; i<str.length(); i++) 
    { 
        // char c = str[i]; 

        // If element is already in hash set, update x 
        // and then break 
        if (h.find(str[i]) != h.end()) 
        {
            ans+=str[i];
            break; 
        }
            

        else // Else add element to hash set 
            h.insert(str[i]); 
    } 
if(ans.size() == 0)
{
    ans += "-1";
}
    // If there was no repeated character 
    return ans; 
    //code here.
}
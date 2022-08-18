class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,j=s.size()-1;
        
        while(s[j] == ' ')
            j--;
        
        for(int i=j;i>=0;i--)
        {
            if(s[i] == ' ')
            {
                // ans=j-i;
                // j=i;
                break;
            }
            else
            {
                ans++;
            }
        }
        return ans;
        
    }
};
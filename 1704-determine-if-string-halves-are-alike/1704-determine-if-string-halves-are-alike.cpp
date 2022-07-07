class Solution {
public:
    bool halvesAreAlike(string s) {
        int ans=0,i=0,j=s.size()-1;
        
        while(i<j)
        {
            s[i]=tolower(s[i]);
            s[j]=tolower(s[j]);
            if(s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117)
                ans++;
            i++;
            if(s[j] == 97 || s[j] == 101 || s[j] == 105 || s[j] == 111 || s[j] == 117)
                ans--;
            j--;
        }
        if(ans == 0)
            return true;
        return false;
        
    }
};
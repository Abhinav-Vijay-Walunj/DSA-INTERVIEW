class Solution {
public:
    bool isAnagram(string s, string t) {
        int a=s.size(),b=t.size();
        
        if(a!=b)
        {
            return false;
        }
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<a;i++)
        {
            if(s[i] != t[i])
            {
                return false;
            }
}
        
        return true;
        
    }
};
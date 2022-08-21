class Solution {
public:
    bool match(string& a,string& b)
    {
        if(a.size() != b.size())
            return false;
        for(int i=0;i<a.size();i++)
            if(a[i] != b[i] && a[i] != '?' && b[i] != '?')
                return false;
        return true;
    }
    bool allWild(string& s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != '?')
                return false;
            
        }
        return true;
    }
    vector<int> movesToStamp(string stamp, string target) {
        int n=target.size(),m=stamp.size();
        vector<int> ans;
        string str;
        bool f=true;
        
        while(f)
        {
            f=false;
            for(int i=0;i<n-m+1;i++){
                str = target.substr(i,m);  // get substr of length m
                
                // if its all windcard no need to stamp
                if(allWild(str)) continue; 
                if(match(stamp,str)){  // match substr with stamp
                    f = true; // set flag
                    ans.push_back(i); // push the i as match is found
                    // if its all windcard no need to stamp
                    for(int j=0;j<m;j++) target[i+j] = '?'; 
                }
            }
        }
        if(!allWild(target))  ans.clear();
        if(ans.size() > 10*n) ans.clear();
        
        // reverse answer as we did the whole procedure in reverse
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};
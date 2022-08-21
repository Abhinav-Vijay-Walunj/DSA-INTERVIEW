class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int ans=0;
        int arr[26]={0};
        for(auto i:brokenLetters)
            arr[i-'a']++;
        
        int n=text.size(),temp=0,i=0;
        
        while(i<n)
        {
            if(text[i] != ' ')
            {
                if(arr[text[i]-'a']>0)
                {
                    temp++;
                
                while(text[i] != ' ' && i<n)
                    i++;
                }
            }
            if(text[i] == ' ')
                ans++;
            i++;
        }
        
        return ans-temp+1;
    }
};
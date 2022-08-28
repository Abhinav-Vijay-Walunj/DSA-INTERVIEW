class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        stack<int>numberStack;
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='['){
                string s1="";
                int j=i-1;
                for(;j>=i-4 && j>=0;j--)
                {
                    char ch = s[j];
                    if(ch>='0' && ch<='9')
                        continue;
                    else {
                        s1 = s.substr(j+1,i-j-1);
                        break;
                    }
                }
                if(s1=="")
                    s1 = s.substr(j+1,i-j-1);
                numberStack.push(stoi(s1));
                st.push(str);
                str="";
            }
            else if(s[i]==']')
            {
                string temp="";
                int num = numberStack.top();
                numberStack.pop();
                for(int c=0;c<num;c++)
                    temp+=str;
                if(!st.empty()){
                    str = st.top();
                    st.pop();
                }
                else str="";
                str+=temp;
            }
            else if(s[i]>'9')
            str+=string(1,s[i]);
        }
        return str;
        
    }
};
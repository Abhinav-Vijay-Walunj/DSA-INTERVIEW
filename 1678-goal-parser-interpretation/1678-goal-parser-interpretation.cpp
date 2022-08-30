class Solution {
public:
    string interpret(string command) {
        string s;
        for(int i = 0 ; i < command.length(); i++){
            if(command[i]=='G'){
                s.push_back(command[i]);
            }
            if(command[i]=='('){
                if(command[i+1]==')'){
                  s.push_back('o');  
                }
                else{
                    s.push_back('a');
                    s.push_back('l');
                }
            }
        }
       return s; 
    }
};
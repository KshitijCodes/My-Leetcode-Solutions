class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        bool result = true;
        for(int i=0; i<s.length(); i++){
            if(brackets.empty()|s[i]=='('|s[i]=='{'|s[i]=='['){
                brackets.push(s[i]);
            }
            else if(s[i]==')'){
                if(brackets.top()=='('){
                    brackets.pop();
                }
                else{
                    result = false;
                    break;
                }
            }
            else if(s[i]=='}'){
                if(brackets.top()=='{'){
                    brackets.pop();
                }
                else{
                    result = false;
                    break;
                }
            }
            else if(s[i]==']'){
                if(brackets.top()=='['){
                    brackets.pop();
                }
                else{
                    result = false;
                    break;
                }
            }
            else{
                continue;
            }
        }
        if(!brackets.empty()) result = false;
        return result;
    }
};

class Solution {
public:
    bool checkParenthesis(char a,char b){
        return((a=='('&& b==')')||(a=='{'&& b=='}')||(a=='['&& b==']'));
    }
    bool isValid(string s) {
        stack<char>chars;
        for(auto i:s){
            if(i=='('||i=='{'||i=='[')chars.push(i);
            if(i==')'||i=='}'||i==']'){
                if(chars.empty())return false;
                char c=chars.top();
                if(!checkParenthesis(c,i))return false;
                else{
                    chars.pop();
                }
            }
        }
        return chars.empty();
    }
};

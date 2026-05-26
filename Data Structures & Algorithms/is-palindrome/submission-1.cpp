class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;int j=s.size()-1;
        while(i<j){
            if(!iswalnum(s[i]))i++;
            else if(!iswalnum(s[j]))j--;
            else{
                if(tolower(s[i])!=tolower(s[j])){
                    return false;
                    break;
                }
                i++;
                j--;
            }
        }
        return true;
    }
};

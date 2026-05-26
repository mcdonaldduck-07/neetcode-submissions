class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int>chars(26,0);
        for(char c:s){
            chars[c-'a']++;
        }
        for(char c:t){
            chars[c-'a']--;
        }
        
        for(int c:chars){
            if( c!=0)return false;
        }
        return true;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        int l=0;
        unordered_set<char>seen;
        for(int r=0;r<s.size();r++){
            if(seen.count(s[r])==0){
                seen.insert(s[r]);
                len=max(len,r-l+1);
            }
            else{
                while(seen.count(s[r])!=0){
                    seen.erase(s[l]);
                    l++;
                }
                seen.insert(s[r]);
            }
        }
        return len;
    }
};

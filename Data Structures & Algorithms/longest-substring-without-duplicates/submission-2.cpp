class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,count=0;
        set<char>seen;
        for(int right=0;right<s.size();right++){
            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            count = max(count,right-left+1);
        }
        return count;
    }
};

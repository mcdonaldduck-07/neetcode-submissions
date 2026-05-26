class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>seen(nums.begin(),nums.end());
        return !(nums.size()==seen.size());
    }
};
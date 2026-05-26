class Solution {
public:
    int findMin(vector<int> &nums) {
        int min=nums[0];
        for(auto x:nums)x<min?(min=x):min=min;
        return min;
    }
};

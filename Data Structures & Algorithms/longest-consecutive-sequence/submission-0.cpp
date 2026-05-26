class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i:nums)freq[i]++;
        
        int longest=0;
        for(int i:nums){
            if(freq.find(i-1)==freq.end()){
                int len=1;
                while(freq.find(i+1)!=freq.end()){
                    len++;
                    i++;
                }
                longest=max(longest,len);
            }
        }
        return longest;
    }
};

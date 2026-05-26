class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;//product of non zero numbers
        int zerocount=0;vector<int>result;
        for(auto i:nums){
            if(i!=0)prod *=i;
            if(i==0)zerocount++;
        }
        if(zerocount>1){
            for(int i=0;i<nums.size();i++)result.push_back(0);
        }
        if(zerocount==1){
            for(auto i:nums){
                if(i==0){
                    result.push_back(prod);
                }
                else{
                    result.push_back(0);
                }
            }
        }
        if(zerocount==0){
            for(auto i:nums)result.push_back(prod/i);
        }
        return result;
    }
};

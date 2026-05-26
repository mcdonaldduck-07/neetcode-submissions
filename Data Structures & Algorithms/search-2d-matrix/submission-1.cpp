class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto x:matrix){
            if(x[0]<=target && target <= x[x.size()-1]){
                int l=0,r=x.size();
                while(l<=r){
                    int m=l+(r-l)/2;
                    if(x[m]==target)return true;
                    else if(x[m] > target)r=m-1;
                    else l=m+1;
                }
            }
        }
        return false;
    }
};

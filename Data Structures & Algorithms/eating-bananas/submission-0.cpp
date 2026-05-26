class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;int r=*max_element(piles.begin(),piles.end());
        int res=r;
        while(l<=r){
            int k=l+(r-l)/2;
            long long hr=0;
            for(auto x:piles)hr+=(x+k-1)/k;
            if(hr<=h){
                res=min(res,k);
                r=k-1;
            }else{
                l=k+1;
            }
        }
        return res;
    }
};

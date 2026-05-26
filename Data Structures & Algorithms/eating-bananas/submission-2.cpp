class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // max element for piles
        int maxk=INT_MIN;
        for(int i:piles){
            if(i>maxk)maxk=i;
        }

        // range of k is between 1 to maxk 

        int l=1,r=maxk;
        int k=maxk;
        while(l<=r){
            int m=l+(r-l)/2;
            int time=0;
            for(int i:piles){
                time+= (i+m-1)/m;
            }
            if(time <= h){
                k=min(m,k);
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return k;
    }
};

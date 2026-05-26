class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxp=INT_MIN;int minp=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minp=min(minp,prices[i]);
            maxp=max(minp,prices[i]);
            int p=maxp-minp;
            if(p<0)p=0;
            else profit=max(profit,p);
        }
        return profit;
    }
};

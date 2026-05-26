class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minp=prices[0];

        for(int i:prices){
            if (i<minp)minp=i;
            profit=max(profit,i-minp);
        }
        return profit;
    }
};

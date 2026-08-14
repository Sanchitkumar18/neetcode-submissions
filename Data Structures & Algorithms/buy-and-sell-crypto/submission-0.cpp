class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int minbuy=prices[0];
        for(auto sell:prices){
            maxp=max(maxp,sell-minbuy);
            minbuy=min(minbuy,sell);
        }
        return maxp;
    }
};

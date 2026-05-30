class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int minbuy= prices[0];
        int profit=0;
        for(int i=1;i<n;i++){
        profit= max(prices[i]- minbuy, profit);
        minbuy= min(minbuy, prices[i]);
        }
        return profit;
    }
};

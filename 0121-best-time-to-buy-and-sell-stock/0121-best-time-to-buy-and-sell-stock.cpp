class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            // update minimum price if found
            if (prices[i] < min_price) {
                min_price = prices[i];
            } 
            // update profit if current price - min_price is higher
            else if (prices[i] - min_price > max_profit) {
                max_profit = prices[i] - min_price;
            }
        }

        return max_profit;
    }

};
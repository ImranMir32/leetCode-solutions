class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n <= 1) {
            return 0;
        }
        int min_price = prices[0];
        int max_profit = 0;
        for (int i = 1; i < n; i++) {
            max_profit = max(max_profit, prices[i] - min_price); 
            min_price = min(min_price, prices[i]);
        }
        return max_profit; 
    }
};
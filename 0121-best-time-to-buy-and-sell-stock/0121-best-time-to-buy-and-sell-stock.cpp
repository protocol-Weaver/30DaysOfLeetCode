class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = prices[0];
        int max_profit = 0;
        for(int price : prices) {
            minimum = min(minimum, price);
            max_profit = max(max_profit, price - minimum);
        }
        return max_profit;
    }
};

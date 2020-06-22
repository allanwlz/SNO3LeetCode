
// @Title: 买卖股票的最佳时机 (Best Time to Buy and Sell Stock)
// @Author: user3919vu
// @Date: 2020-06-03 14:14:20
// @Runtime: 12 ms
// @Memory: 13.1 MB

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, buy = INT_MAX;
        for (auto &price : prices){
            buy = min(price, buy);
            max_profit = max(max_profit, price - buy);
        }
        return max_profit;
    }
};

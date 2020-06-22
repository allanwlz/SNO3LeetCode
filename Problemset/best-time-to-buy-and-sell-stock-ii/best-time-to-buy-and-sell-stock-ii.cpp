
// @Title: 买卖股票的最佳时机 II (Best Time to Buy and Sell Stock II)
// @Author: user3919vu
// @Date: 2020-06-03 14:48:17
// @Runtime: 0 ms
// @Memory: 7.2 MB

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 1; i < prices.size(); i++) profit += max(0, prices[i] - prices[i - 1]);
        return profit;
    }
};

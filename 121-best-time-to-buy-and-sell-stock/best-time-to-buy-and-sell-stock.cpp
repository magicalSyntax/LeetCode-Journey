class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0], profit, max_profit=0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i-1] < prices[i]){
                if(min > prices[i-1]) min = prices[i-1];
                profit = prices[i] - min;
                if(max_profit < profit){
                    max_profit = profit;
                }
            }
        }
        return max_profit;
    }
};
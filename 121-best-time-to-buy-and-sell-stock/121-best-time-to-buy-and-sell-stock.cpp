class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buy_price=INT_MAX;
        int max_profit=0;
        for(int i=0;i<prices.size();i++){
            min_buy_price=min(min_buy_price,prices[i]);
            max_profit=max(max_profit,prices[i]-min_buy_price);
        }
        return max_profit;
        
    }
};
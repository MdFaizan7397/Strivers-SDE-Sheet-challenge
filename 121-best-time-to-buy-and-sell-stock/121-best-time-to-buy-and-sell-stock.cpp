class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maximum_profit=0;
        int minimun_price=INT_MAX;
        for(int i=0;i<n;i++){
           minimun_price =min(minimun_price,prices[i]);
            maximum_profit=max(maximum_profit,prices[i]-minimun_price);
            
            
        } 
        return maximum_profit;
    }
};
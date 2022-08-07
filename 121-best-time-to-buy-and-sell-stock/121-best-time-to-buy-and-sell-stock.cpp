//BRUTE FORCE

/*class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(prices[j]>prices[i]){
                    diff=max(prices[j]-prices[i],diff);
                }
                
            }
        }
        return diff;
        
    }
};*/
//OPTIMIZED APPROACH
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
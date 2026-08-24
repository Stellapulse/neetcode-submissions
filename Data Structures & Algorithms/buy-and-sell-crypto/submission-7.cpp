class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.size()<2)return 0;

      
        int max_profit = prices[1] - prices[0];
        int min_buy=min(prices[0],prices[1]);

        for(int i=2;i<prices.size();i++){
            max_profit = max ( max_profit , prices[i] - min_buy);
            min_buy = min(min_buy,prices[i]);
        }

        return max(0,max_profit);
        
    }
};

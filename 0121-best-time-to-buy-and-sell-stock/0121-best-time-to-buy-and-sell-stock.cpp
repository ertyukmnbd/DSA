class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],profit=0;
        for(int i=0;i<prices.size();i++){
           
            int sell=prices[i]-buy;
             buy=min(buy,prices[i]);
            profit=max(profit,sell);
        }
   return profit; }
};
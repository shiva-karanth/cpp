//LeetCode Solution qno121
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_cost= INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            
            min_cost=min(prices[i],min_cost);
            profit= max(profit, (prices[i]-min_cost));
            
        }
        return profit;
    }
};
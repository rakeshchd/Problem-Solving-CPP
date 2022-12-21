class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int index = 0;
        for(int i=0; i<n; i++){
            if(prices[i]<prices[index]) index = i;
            if(maxProfit < prices[i]-prices[index]) maxProfit = prices[i]-prices[index];
        }
        return maxProfit;
    }
};
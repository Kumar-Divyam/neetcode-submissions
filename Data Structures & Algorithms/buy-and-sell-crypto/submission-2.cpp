class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //Note: Core Logic is to decide when to move the Left Pointer, anyways right pointer moves forward one day at a time checking the current profit.

        int diff = 0;
        for(int b=0, s=1; s<prices.size(); ){
            int profit = prices[s] - prices[b];
            if(profit > diff){
                diff = profit;
            }
            if(prices[s] < prices[b]){
                b=s;s++;
            }
            else
                s++;
        }
        return diff;
        
    }
};

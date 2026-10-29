class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = INT_MIN;
        for(int i=0; i< prices.size()-1; i++){
            for(int j=i+1; j< prices.size();j++){
                if(prices[j]-prices[i] > diff)
                    diff = prices[j]-prices[i];
            }
        }
        if(diff < 0)
            return 0;
        return diff;
    }
};

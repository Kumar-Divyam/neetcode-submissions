class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> res(temp.size(), 0);
        stack<int> stk; // Only store indices
        
        for(int i = 0; i < temp.size(); i++){
            // While stack is not empty AND current day is warmer than the day at top of  stack
            while(!stk.empty() && temp[i] > temp[stk.top()]){
                int prev_index = stk.top();
                res[prev_index] = i - prev_index;
                stk.pop();
            }
            // Always push the current index to wait for a warmer day
            stk.push(i);
        }
        
        // Remaining elements in stack correctly default to 0 in 'res'.
        return res;
    }
};
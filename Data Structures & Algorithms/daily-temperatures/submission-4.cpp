class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> res(temp.size(), 0);
        stack<int> stk;
        stk.push(0);
        for(int i = 1; i< temp.size(); i++){
            while(!stk.empty() && temp[i] > temp[stk.top()]){
                res[stk.top()] = i - stk.top();
                stk.pop();
            }
            stk.push(i);
        }

        return res;
    }
};

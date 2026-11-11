class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> res(temp.size(), 0);
        stack<pair<int,int>> near;
        near.push(make_pair(temp[0],0));
        for(int i = 1; i< temp.size(); i++){
            if(temp[i] > (near.top().first)){
                pair<int, int> t = near.top();
                while(temp[i] > t.first){
                    res[t.second] = (i-(t.second));
                    near.pop();
                    if(near.empty())
                        break;
                    else
                        t = near.top();
                }
                near.push(make_pair(temp[i], i));
            }
            else{
                near.push(make_pair(temp[i], i));
            }
        }

        return res;
    }
};

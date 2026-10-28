class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res_set;
        sort(nums.begin(), nums.end());
        for(int i=0; i< nums.size()-2; i++ ){
            for(int j=i+1, k = nums.size()-1; j<k ;){
                if(nums[i]+nums[j]+nums[k] > 0)
                    k--;
                else if(nums[i]+nums[j]+nums[k] < 0)
                    j++;
                else{
                    res_set.insert({nums[i], nums[j], nums[k]});
                    j++;k--;
                }
            }
        }
        vector<vector <int>> res;
        for(auto it = res_set.begin(); it!=res_set.end(); it++){
            res.push_back(*it);
        }
        return res;
    }
};

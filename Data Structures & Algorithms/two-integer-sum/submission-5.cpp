class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> ans(2, 0);
        //hash.insert({nums[0],0});
        for(int i=0; i < nums.size(); i++){
            if(hash.count(target - nums[i])){
                ans[0] = (hash.find(target - nums[i]) -> second);
                ans[1] = i;
                break;
            }
            else{
                hash.insert({nums[i], i});
            }
        }
        return ans;
    }
};

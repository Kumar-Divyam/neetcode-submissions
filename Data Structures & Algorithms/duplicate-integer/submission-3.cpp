class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()<=1)
            return false;
        unordered_set<int> dup;
        for(int i=0; i<nums.size(); i++){
            dup.insert(nums[i]);
        }
        if(nums.size() != dup.size())
            return true;
        return false;
    }
};
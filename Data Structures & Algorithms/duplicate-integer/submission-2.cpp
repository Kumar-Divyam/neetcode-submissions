class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> repeat;
        for(int i=0; i< nums.size(); i++){
            if(repeat.contains(nums[i])){
                return true;
            }
            else{
                repeat.insert(nums[i]);
            }
        }
        return false;
    }
};
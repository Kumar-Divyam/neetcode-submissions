class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0; i< nums.size()-2; i++ ){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(int j=i+1, k = nums.size()-1; j<k ;){
                int sum = nums[i]+nums[j]+nums[k];
                if( sum > 0)
                    k--;
                else if(sum < 0)
                    j++;
                else{
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;k--;
                    while(j<k && nums[j] == nums[j-1])
                        j++;
                }
            }
        }
        return res;
    }
};

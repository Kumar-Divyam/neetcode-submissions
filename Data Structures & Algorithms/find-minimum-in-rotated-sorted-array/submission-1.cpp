class Solution {
public:
    int findMin(vector<int> &nums) {
        int res = INT_MAX, l = 0, r = nums.size()-1;
        while(l <= r){
            int mid = l + (r-l)/2;
            //cut the array -> find sorted half -> reject it
            if(nums[mid] >= nums[l] && nums[mid] > nums[r]){
                res = min(res, nums[mid]);
                l = mid+1;
            }
            else{
                res = min(res, nums[mid]);
                r = mid-1;
            }
        }
        return res;
    }
};

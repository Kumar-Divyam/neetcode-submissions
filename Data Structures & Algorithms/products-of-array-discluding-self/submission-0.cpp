class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int n = nums.size();
        vector<long> left(n, 1);
        vector<long> right(n, 1);
        vector<int> res(n, 1);
        left[0] = nums[0];
        right[n-1] = nums[n-1];
        for(int i=1; i < n; i++){
            left[i] = (nums[i] * left[i-1]);
        }

        for(int i = n-2; i >= 0 ; i--){
            right[i] = (nums[i] * right[i+1]);
        }


        res[0] = right[1];
        res[n-1] = left[n-2];
        for(int i=1; i < n-1; i++){
            res[i] = left[i-1] * right[i+1];
        }

        
        return res;
    }
};

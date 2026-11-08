class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int n = nums.size();
        vector<int> res(n, 1);
        res[0] = 1;
        for(int i=1; i< n; i++){
            res[i] = nums[i-1] * res[i-1];
        }
        int prod = 1;
        for(int i = n-2; i>=0; i--){
            prod *= nums[i+1];
            res[i] = res[i]*prod;
        }

        return res;
    }
};

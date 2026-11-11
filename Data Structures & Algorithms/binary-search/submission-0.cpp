class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res = -1;
        for(int l=0, r=nums.size()-1; l <= r; ){
            int h = (l+r)/2;
            if(nums[h] == target)
                return h;
            else if(nums[h] > target){
                //move right end to h
                r = h-1; 
            }
            else{
                //move left end to h
                l = h+1;
            }
        }
        return -1;
    }
};

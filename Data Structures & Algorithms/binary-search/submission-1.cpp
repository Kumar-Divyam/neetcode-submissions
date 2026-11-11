class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res = -1;
        for(int l=0, r=nums.size()-1; l <= r; ){
            /*In C++, a standard signed int has a maximum limit of exactly 2,147,483,647. If you add two numbers together and the result goes even one number above this limit, it causes an integer overflow. The system wraps the number around into the negatives.
            
            Imagine you are searching through a massive database and your pointers have shifted very far to the right:l = 2,000,000,000r = 2,100,000,000.Both of these numbers safely fit inside a standard int. But look at what happens when you calculate the midpoint using (l + r) / 2:The Overflow Trap:First, the computer calculates the addition: 2,000,000,000 + 2,100,000,000.The result is 4,100,000,000. This instantly shatters the 2.14 billion int limit.C++ forcefully wraps it into the negatives, resulting in roughly -194,967,296.
            The Solution:
Instead of adding the pointers together, we calculate the distance between them, cut that distance in half, and add it to the starting point.Using l + (r - l) / 2 with those exact same numbers:
- Calculate the distance and cut the distance in half: 100,000,000 / 2 = 50,000,000. (Safe)
- Add it to the starting point: 2,000,000,000 + 50,000,000 = 2,050,000,000. (Safe!)*/
            int h = l + (r-l)/2;
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

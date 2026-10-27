class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0, j=numbers.size()-1; i<j; ){
            if(numbers[i]+numbers[j] > target)
                j--;
            else if(numbers[i]+numbers[j] < target)
                i++;
            else{
                return {i+1, j+1};
            }
        }
        return {};
        /*Note: 
        1. Brute force: for every i -> check (j=i+1) + i == target
        2. Hash-map: for every i -> check map.find(target-i), else map.insert(i)
        3. 2 pointers */
    }
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> arr;
        for(int i=0; i < matrix.size(); i++){
            for(int j=0; j< matrix[i].size(); j++){
                arr.push_back(matrix[i][j]);
            }
        }
        for(int i=0, j=arr.size()-1; i<=j ;){
            int h = i + (j-i)/2;
            if(arr[h] == target)
                return true;
            else if(arr[h] > target)
                j = h-1;
            else
                i = h+1;
        }
        return false;
    }
};

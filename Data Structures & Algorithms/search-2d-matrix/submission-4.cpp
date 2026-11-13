class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(), c = matrix[0].size();
        int i=0, j = r*c-1, h=0;
        //r = h/c, c = h%c (Note: C++ 2D vectors are "row-major"—they fill up an entire row from left to right before spilling over into the next row.)
        while (i<=j){
            h = i + (j-i)/2;
            if(matrix[h/c][h%c] == target)
                return true;
            else if(matrix[h/c][h%c] > target)
                j = h-1;
            else
                i = h+1;
        }
        return false;

    }
};

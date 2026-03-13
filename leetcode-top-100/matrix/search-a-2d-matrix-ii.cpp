// link: https://leetcode.cn/problems/search-a-2d-matrix-ii

class Solution {
public:
    // Method 1: Scanning
    // Time Complexity: O(m + n)
    // Space Complexity: O(1)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();

        int x = 0, y = n - 1;
        while (x < m && y >= 0) {
            if (matrix[x][y] == target) {
                return true;
            } else if (matrix[x][y] > target) {
                --y;
            } else {
                ++x;
            }
        } 

        return false;
    }

    // Method 2: Binary Search
    // Time Complexity: O(m + n)
    // Space Complexity: O(1)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int l, r, mid;

        for (int i = 0; i < m; ++i) {
            l = 0;
            r = n - 1;
            while (l <= r) {
                mid = l + (r - l) / 2;
                if (target == matrix[i][mid]) {
                    return true;
                } else if (target > matrix[i][mid]) {
                    ++l;
                } else {
                    --r;
                }
            }
        }

        return false;
    }
};
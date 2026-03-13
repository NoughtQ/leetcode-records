// link: https://leetcode.cn/problems/search-a-2d-matrix

class Solution {
public:
    // Method 1: Flattening
    // Time Complexity: O(m * n)
    // Space Complexity: O(m * n)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> seq;
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = m * n - 1, mid;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                seq.push_back(matrix[i][j]);
            }
        }

        while (l <= r) {
            mid = l + (r - l) / 2;
            if (target == seq[mid]) {
                return true;
            } else if (target < seq[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return false;
    }

    // Method 2: Double Binary Search (row + column)
    // Time Complexity: O(log m + log n)
    // Space Complexity: O(1) (no extra space used)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int l, r, mid, row;

        l = 0;
        r = m - 1;
        while (l <= r) {
            mid = l + (r - l) / 2;
            if (target == matrix[mid][0]) {
                return true;
            } else if (target < matrix[mid][0]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        
        row = r;
        if (row < 0) return false;
        l = 0;
        r = n - 1;
        while (l <= r) {
            mid = l + (r - l) / 2;
            if (target == matrix[row][mid]) {
                return true;
            } else if (target < matrix[row][mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return false;
    }
};
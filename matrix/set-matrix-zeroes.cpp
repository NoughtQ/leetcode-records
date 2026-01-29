// link: https://leetcode.cn/problems/set-matrix-zeroes

class Solution {
public:
    // Method 1
    // Time Complexity: O(mn)
    // Space Complexity: O(m + n)
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), len;
        vector<pair<int, int>> zero_pos;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!matrix[i][j])
                    zero_pos.push_back({i, j});
            }
        }

        len = zero_pos.size();
        for (const auto &pos : zero_pos) {
            for (int j = 0; j < n; ++j)
                matrix[pos.first][j] = 0;
            for (int j = 0; j < m; ++j)
                matrix[j][pos.second] = 0;    
        }
    }

    // Method 2: The first row and first column of the matrix 
    //           record whether there is a 0 element in that row/column
    // Time Complexity: O(mn)
    // Space Complexity: O(1)
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        bool r_z = false, c_z = false;

        for (int i = 0; i < m; ++i) {
            if (matrix[i][0] == 0) {
                r_z = true;
                break;
            }
        }

        for (int i = 0; i < n; ++i) {
            if (matrix[0][i] == 0) {
                c_z = true;
                break;
            }
        }

        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        if (r_z) {
            for (int i = 0; i < m; ++i) {
                matrix[i][0] = 0;
            }            
        }

        if (c_z) {
            for (int i = 0; i < n; ++i) {
                matrix[0][i] = 0;
            }            
        }
    }
};
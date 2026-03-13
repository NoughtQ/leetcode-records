// link: https://leetcode.cn/problems/rotate-image

class Solution {
public:
    // Just Simulation
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int cnt = n / 2;
        int cur1, cur2, cur3;
        
        for (int i = 0; i < cnt; ++i) {
            for (int j = 0; j < n - i * 2 - 1; ++j) {
                cur1 = matrix[i + j][n - 1 - i];
                matrix[i + j][n - 1 - i] = matrix[i][i + j];
                cur2 = matrix[n - 1 - i][n - 1 - i - j];
                matrix[n - 1 - i][n - 1 - i - j] = cur1;
                cur3 = matrix[n - 1 - i - j][i];
                matrix[n - 1 - i - j][i] = cur2;
                matrix[i][i + j] = cur3;
            }
        }
    }

    // Better Method: Two Flips = Horizontal Flip + Flip by Main Diagonal
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n / 2; ++i) {
            for (int j = 0; j < n; ++j) {
                swap(matrix[i][j], matrix[n - 1 - i][j]);
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
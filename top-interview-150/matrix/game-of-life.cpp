// link: https://leetcode.cn/problems/game-of-life

class Solution {
public:
    // My Solution:
    // Time Complexity: O(mn)
    // Space Complexity: O(mn)
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size(), n = board[0].size();
        vector<vector<int>> result(m, vector<int>(n, 0));
        int cnt;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cnt = 0;
                for (int k = -1; k <= 1; ++k) {
                    for (int l = -1; l <= 1; ++l) {
                        if (
                            !k && !l || 
                            i + k < 0 || i + k >= m || 
                            j + l < 0 || j + l >= n
                        ) continue;
                        if (board[i + k][j + l]) ++cnt;
                    }
                }
                if (cnt == 3 || board[i][j] && cnt == 2) {
                    result[i][j] = 1;
                }
            }
        }

        board = result;
    }

    // Official Solution:
    // Time Complexity: O(mn)
    // Space Complexity: O(1)
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size(), n = board[0].size();
        int cnt;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cnt = 0;
                for (int k = -1; k <= 1; ++k) {
                    for (int l = -1; l <= 1; ++l) {
                        if (
                            !k && !l || 
                            i + k < 0 || i + k >= m || 
                            j + l < 0 || j + l >= n
                        ) continue;
                        if (board[i + k][j + l] >= 1) ++cnt;
                    }
                }
                if (board[i][j] && (cnt < 2 || cnt > 3)) {
                    board[i][j] = 2;
                } else if (!board[i][j] && cnt == 3) {
                    board[i][j] = -1;
                }
            }
        }

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == 2) board[i][j] = 0;
                else if (board[i][j] == -1) board[i][j] = 1;
            }
        }
    }
};
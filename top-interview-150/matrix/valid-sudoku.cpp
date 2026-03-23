// link: https://leetcode.cn/problems/valid-sudoku

class Solution {
public:
    // My Solution:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int r = board.size(), c = board[0].size();
        unordered_set<char> ht;
        bool flag = true;

        for (int i = 0; i < r; ++i) {
            ht.clear();
            for (int j = 0; j < c; ++j) {
                if (board[i][j] != '.') {
                    if (ht.contains(board[i][j])) {
                        return false;
                    }
                    ht.insert(board[i][j]);
                }
            }
        }

        for (int j = 0; j < c; ++j) {
            ht.clear();
            for (int i = 0; i < r; ++i) {
                if (board[i][j] != '.') {
                    if (ht.contains(board[i][j])) {
                        return false;
                    }
                    ht.insert(board[i][j]);
                }
            }
        }

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                ht.clear();
                for (int t = 0; t < 3; ++t) {
                    for (int s = 0; s < 3; ++s) {
                        if (board[i * 3 + t][j * 3 + s] != '.') {
                            if (ht.contains(board[i * 3 + t][j * 3 + s])) {
                                return false;
                            }
                            ht.insert(board[i * 3 + t][j * 3 + s]);
                        }
                    }
                }
            }
        }

        return true;
    }
};
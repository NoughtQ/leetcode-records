// link: https://leetcode.cn/problems/n-queens

class Solution {
public:
    // Method: Backtracking
    // Time Complexity: O(n!)
    // Space Complexity: O(n^2)
    vector<vector<string>> ans;
    vector<string> board;
    int nn;
    vector<vector<bool>> is_placed;

    vector<vector<string>> solveNQueens(int n) {
        nn = n;
        is_placed.resize(nn, vector<bool>(nn, false));
        backtracking(0);
        return ans;
    }

    void backtracking(int x) {
        if (x == nn) {
            ans.push_back(board);
            return;
        }

        bool flag;
        for (int i = 0; i < nn; ++i) {
            flag = false;
            for (int j = x - 1; j >= 0; --j) {
                if (i + (x - j) < nn && is_placed[j][i + (x - j)] ||
                    i - (x - j) >= 0 && is_placed[j][i - (x - j)] ||
                    is_placed[j][i]
                ) {
                    flag = true;
                    break;
                }
            }
            if (flag) continue;

            is_placed[x][i] = true;
            board.push_back(rowString(i));
            backtracking(x + 1);
            board.pop_back();
            is_placed[x][i] = false;
        }
    }

    string rowString(int col) {
        string res(nn, '.');
        res[col] = 'Q';
        return res;
    }
};
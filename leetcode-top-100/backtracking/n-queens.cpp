// link: https://leetcode.cn/problems/n-queens

class Solution {
public:
    // Method: Backtracking
    // Time Complexity: O(n!)
    // Space Complexity: O(n^2)
    vector<vector<string>> ans;
    vector<string> board;
    vector<bool> col, diag1, diag2;

    vector<vector<string>> solveNQueens(int n) {
        col.resize(n, false);
        diag1.resize(2 * n - 1, false);
        diag2.resize(2 * n - 1, false);
        backtracking(0, n);
        return ans;
    }

    void backtracking(int x, int n) {
        if (x == n) {
            ans.emplace_back(board);
            return;
        }

        for (int y = 0; y < n; ++y) {
            if (col[y] || diag1[x + y] || diag2[x - y + n - 1])
                continue;
            col[y] = true; diag1[x + y] = true; diag2[x - y + n - 1] = true;
            board.push_back(rowString(y, n));
            backtracking(x + 1, n);
            board.pop_back();
            col[y] = false; diag1[x + y] = false; diag2[x - y + n - 1] = false;
        }
    }

    string rowString(int col) {
        string res(nn, '.');
        res[col] = 'Q';
        return res;
    }
};
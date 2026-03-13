// link: https://leetcode.cn/problems/word-search

class Solution {
public:
    // Method: Backtracking
    // Time Complexity: O(m * n * 4^k)
    // Space Compelxity: O(n)
    int m, n;
    const char dx[4] = {1, -1, 0, 0};
    const char dy[4] = {0, 0, 1, -1};

    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        string tmp;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                tmp = "";
                if (backtracking(i, j, tmp, word, board))
                    return true;
            }
        }

        return false;
    }

    bool backtracking(int x, int y, string cur, string target, vector<vector<char>>& b) {
        if (cur.length() == target.length()) {
            return cur == target;
        }

        if (x < 0 || x >= m || 
            y < 0 || y >= n || 
            !isalpha(b[x][y]) || 
            target[cur.length()] != b[x][y]
        ) return false;

        int _x, _y;
        char origin = b[x][y];
        cur += b[x][y];
        b[x][y] = '0';
        for (int i = 0; i < 4; ++i) {
            _x = x + dx[i];
            _y = y + dy[i];
            if (backtracking(_x, _y, cur, target, b))
                return true;
        }
        cur.pop_back();
        b[x][y] = origin;

        return false;
    }
};
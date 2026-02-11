// link: https://leetcode.cn/problems/rotting-oranges

class Solution {
public:
    // Method: BFS
    // Time Complexity: O(mn)
    // Space Complexity: O(mn)
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int cnt = 0, ans = 0;
        int x, y, _x, _y;
        int d1[4] = {-1, 1, 0, 0};
        int d2[4] = {0, 0, -1, 1};
        vector<vector<int>> time(m, vector<int>(n, -1));
        queue<pair<int, int>> q;

        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                    time[i][j] = 0;
                } else if (grid[i][j] == 1) {
                    ++cnt;
                }
            }

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            for (int i = 0; i < 4; ++i) {
                _x = x + d1[i];
                _y = y + d2[i];
                if (_x < 0 || _x >= m ||
                    _y < 0 || _y >= n ||
                    grid[_x][_y] == 0 ||
                    time[_x][_y] != -1
                ) continue;
                q.push({_x, _y});
                time[_x][_y] = time[x][y] + 1;
                if (grid[_x][_y] == 1) {
                    --cnt;
                    ans = time[_x][_y];
                }
            }
        }
        return cnt ? -1 : ans;
    }
};
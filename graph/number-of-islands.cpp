// link: https://leetcode.cn/problems/number-of-islands

class Solution {
public:
    int m, n, cnt = 0;

    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int x = 0, y = 0;

        while (x < m && y < n) {
            if (grid[x][y] == '1') {
                cout << x << ", " << y << endl;
                dfs(x, y, grid);
                ++cnt;
            }

            while (x < m && grid[x][y] == '0') {
                ++y;
                if (y == n) {
                    ++x;
                    y = 0;
                }
            }
        }

        return cnt;
    }

    void dfs(int x, int y, vector<vector<char>>& mp) {
        if (x >= m || x < 0 ||
            y >= n || y < 0 ||
            mp[x][y] == '0'
        ) return;
        mp[x][y] = '0';
        dfs(x + 1, y, mp);
        dfs(x - 1, y, mp);
        dfs(x, y + 1, mp);
        dfs(x, y - 1, mp);
    }
};
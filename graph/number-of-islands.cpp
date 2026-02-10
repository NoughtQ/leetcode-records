// link: https://leetcode.cn/problems/number-of-islands

class Solution {
public:
    vector<vector<char>> mp;
    vector<vector<bool>> visited;
    int m, n, cnt = 0;

    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        mp = grid;
        visited.resize(m, vector<bool>(n, false));
        int x = 0, y = 0;
        while (x < m && y < n) {
            if (mp[x][y] == '1') {
                dfs(x, y);
                ++cnt;
            } else {
                visited[x][y] = true;
            }

            while (x < m && visited[x][y]) {
                ++y;
                if (y == n) {
                    ++x;
                    y = 0;
                }
            }
        }

        return cnt;
    }

    void dfs(int x, int y) {
        if (x >= m || x < 0 ||
            y >= n || y < 0 ||
            visited[x][y]
        ) return;
        visited[x][y] = true;
        if (mp[x][y] == '1') {
            dfs(x + 1, y);
            dfs(x - 1, y);
            dfs(x, y + 1);
            dfs(x, y - 1);
        }
    }
};
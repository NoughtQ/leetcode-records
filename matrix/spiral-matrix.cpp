// link: https://leetcode.cn/problems/spiral-matrix

class Solution {
public:
    // Just Simulation
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans;
        int l = 0, r = n - 1, b = m - 1, t = 1;
        int cnt = 0;
        pair<int, int> pos(0, 0);

        while (ans.size() < m * n) {
            ans.push_back(matrix[pos.first][pos.second]);
            switch (cnt) {
                case 0:
                    if (pos.second == r) {
                        --r;
                        cnt = (cnt + 1) % 4;
                        ++pos.first;
                    } else {
                        ++pos.second;
                    }
                    break;
                case 1:
                    if (pos.first == b) {
                        --b;
                        cnt = (cnt + 1) % 4;
                        --pos.second;
                    } else {
                        ++pos.first;
                    }
                    break;
                case 2:
                    if (pos.second == l) {
                        ++l;
                        cnt = (cnt + 1) % 4;
                        --pos.first;
                    } else {
                        --pos.second;
                    }
                    break;
                case 3:
                    if (pos.first == t) {
                        ++t;
                        cnt = (cnt + 1) % 4;
                        ++pos.second;
                    } else {
                        --pos.first;
                    }
            }
        }

        return ans;
    }
};
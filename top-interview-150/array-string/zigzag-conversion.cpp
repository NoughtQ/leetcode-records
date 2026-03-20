// link: https://leetcode.cn/problems/zigzag-conversion

class Solution {
public:
    // My Solution:
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    string convert(string s, int numRows) {
        vector<vector<char>> z_map(numRows);
        int n = s.size(), step = max(1, 2 * numRows - 2);
        string ans = "";

        for (int i = 0; i < n; i += step) {
            for (int j = 0; j < numRows; ++j) {
                if (i + j > n - 1) break;
                z_map[j].emplace_back(s[i + j]);
            }
            for (int j = numRows - 2; j > 0; --j) {
                if (i + 2 * numRows - j - 2 > n - 1) break;
                z_map[j].emplace_back(s[i + 2 * numRows - j - 2]);
            }
        }

        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < z_map[i].size(); ++j) {
                if (z_map[i][j] != '\0')
                    ans += z_map[i][j];
            }
        }

        return ans;
    }

    // More Concise Form (by Krahets)
    // Complexity remains unchanged
    string convert(string s, int numRows) {
        if (numRows < 2) return s;

        vector<string> z_map(numRows);
        int flag = -1, i = 0;
        string ans = "";

        for (char c : s) {
            if (i == 0 || i == numRows - 1) {
                flag = -flag;
            }
            z_map[i] += c;
            i += flag;
        }

        for (int i = 0; i < numRows; ++i) {
            ans += z_map[i];
        }

        return ans;
    }
};
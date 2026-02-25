// link: https://leetcode.cn/problems/word-break

class Solution {
public:
    // Method: Dynamic Programming
    // Time Complexity: O(nm)
    // Space Complexity: O(n)
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> f(n + 1, false);

        f[0] = true;
        for (int i = 1; i <= n; ++i) {
            for (string word : wordDict) {
                int ws = word.size();
                if (i - ws >= 0 && f[i - ws] && s.substr(i - ws, ws) == word) {
                    f[i] = true;
                    break;
                }
            }
        }

        return f[n];
    }
};
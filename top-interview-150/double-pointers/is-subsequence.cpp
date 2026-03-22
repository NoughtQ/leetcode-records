// link: https://leetcode.cn/problems/is-subsequence

class Solution {
public:
    // My Solution
    // Time Complexity: O(n + m)
    // Space Complexity: O(1)
    bool isSubsequence(string s, string t) {
        int ps = 0;
        for (char c : t) {
            if (c == s[ps]) ++ps;
            if (ps == s.size()) break;
        }
        return ps == s.size();
    }
};
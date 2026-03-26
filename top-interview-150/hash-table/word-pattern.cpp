// link: https://leetcode.cn/problems/word-pattern

class Solution {
public:
    // My Solution:
    // Time Complexity: O(m + n)
    // Space Complexity: O(m + n)
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        unordered_map<char, string> p2s;
        unordered_map<string, char> s2p;
        int n = pattern.size(), i = 0;

        while (i < n && ss >> word) {
            if (
                p2s.contains(pattern[i]) && p2s[pattern[i]] != word ||
                s2p.contains(word) && s2p[word] != pattern[i]
            ) {
                return false;
            } else {
                p2s[pattern[i]] = word;
                s2p[word] = pattern[i];
            }
            ++i;
        }

        return i >= n && ss.eof();
    }
};
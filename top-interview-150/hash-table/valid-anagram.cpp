// link: https://leetcode.cn/problems/valid-anagram

class Solution {
public:
    // My Solution:
    // Time Complexity: O(n + m)
    // Space Complexity: O(|S|) (|S| = 26)
    bool isAnagram(string s, string t) {
        array<int, 26> alphabet = {0};

        for (char c : s) {
            ++alphabet[c - 'a'];
        }

        for (char c : t) {
            if (alphabet[c - 'a']) {
                --alphabet[c - 'a'];
            } else {
                return false;
            }
        }

        return s.size() == t.size();
    }
};
// link: https://leetcode.cn/problems/ransom-note

class Solution {
public:
    // My Solution:
    // Time Complexity: O(n + m)
    // Space Complexity: O(|S|) (|S| = 26)
    bool canConstruct(string ransomNote, string magazine) {
        array<int, 26> alphabet = {0};

        for (char c : magazine) {
            ++alphabet[c - 'a'];
        }

        for (char c : ransomNote) {
            if (alphabet[c - 'a']) {
                --alphabet[c - 'a'];
            } else {
                return false;
            }
        }

        return true;
    }
};
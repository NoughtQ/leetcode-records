// link: https://leetcode.cn/problems/length-of-last-word

class Solution {
public:
    // My Solution:
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int lengthOfLastWord(string s) {
        while (!s.empty() && s.back() == ' ') {
            s.pop_back();
        }

        int n = s.size();
        int cur = -1, start;

        do {
            start = cur;
            cur = s.find(' ', cur + 1);
        } while (cur != string::npos);

        return n - start - 1;
    }
};
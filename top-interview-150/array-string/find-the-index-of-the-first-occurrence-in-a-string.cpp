// link: https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    // My Solution:
    // Time Complexity: O(m * n)
    // Space Complexity: O(1)
    int strStr(string haystack, string needle) {
        int p_h = 0, p_n = 0;
        int n = haystack.size(), len = needle.size();
        int pos = -1;

        while (p_h < n) {
            if (haystack[p_h] == needle[p_n]) {
                if (p_n == 0) pos = p_h;
                ++p_h;
                ++p_n;
                if (p_n == len) break;
            } else {
                p_n = 0;
                p_h = pos != -1 ? pos + 1 : p_h + 1;
                pos = -1;
            }
        }

        return p_n == len ? pos : -1;
    }
};
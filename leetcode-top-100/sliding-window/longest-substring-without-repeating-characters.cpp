// link: https://leetcode.cn/problems/longest-substring-without-repeating-characters

class Solution {
public:
    // My Method: Brute Force (Enumeration)
    // Time Complexity: O(N^3)
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i, j, k;

        if (!n) return 0;

        for (i = n; i > 1; --i) {
            for (j = 0; j + i <= n; ++j) {
                for (k = j; k < j + i; ++k) {
                    if (count(s.begin() + j, s.begin() + i + j, s[k]) > 1) {
                        break;
                    }
                }
                if (k == i + j) {
                    return i;
                }
            }
        }

        return 1;
    }

    // Correct Solution: Sliding Window
    // Source: https://leetcode.cn/problems/longest-substring-without-repeating-characters/solutions/227999/wu-zhong-fu-zi-fu-de-zui-chang-zi-chuan-by-leetc-2/comments/2350956/
    // Time Complexity: O(N)
    // Space Complexity: O(N)
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l, r;
        unordered_set<char> t;  // used for deduplication
        // unordered_set is better than set in this question
        int ans = 0;

        for (l = 0, r = 0; r < n; ++r) {
            while (t.contains(s[r])) {
                t.erase(s[l]);
                ++l;
            }
            t.insert(s[r]);
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};
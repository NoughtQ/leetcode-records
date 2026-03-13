// link: https://leetcode.cn/problems/longest-palindromic-substring

class Solution {
public:
    // Method 1: Dynamic Programming
    // Time Complexity: O(n^2)
    // Space Complexity: O(n^2)
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        int lb, max_len = 0;

        for (int r = 0; r < n; ++r) {
            for (int l = r; l >= 0; --l) {
                if (s[l] == s[r] && (r - l <= 2 || dp[l + 1][r - 1])) {
                    dp[l][r] = true;
                }
                if (dp[l][r] && r - l + 1 > max_len) {
                    max_len = r - l + 1;
                    lb = l;
                }
            }
        }

        return s.substr(lb, max_len);
    }

    // Method 2: Center Expansion
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
    string longestPalindrome(string s) {
        int n = s.size();
        int l, r, lb = 0, rb = 0;

        // Odd palindrome
        for (int i = 0; i < n; ++i) {
            l = i;
            r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                --l;
                ++r;
            }
            if (r - l - 1 > rb - lb) {
                lb = l + 1;
                rb = r;
            }
        }

        // Even palindrome
        for (int i = 0; i < n - 1; ++i) {
            l = i;
            r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                --l;
                ++r;
            }
            if (r - l - 1 > rb - lb) {
                lb = l + 1;
                rb = r;
            }
        }
    
        return s.substr(lb, rb - lb);
    }

    // Merge two cases in one loop
    string longestPalindrome(string s) {
        int n = s.size();
        int l, r, lb = 0, rb = 0;

        for (int i = 0; i < 2 * n - 1; ++i) {
            l = i / 2;
            r = (i + 1) / 2;
            while (l >= 0 && r < n && s[l] == s[r]) {
                --l;
                ++r;
            }
            if (r - l - 1 > rb - lb) {
                lb = l + 1;
                rb = r;
            }
        }
    
        return s.substr(lb, rb - lb);
    }
};
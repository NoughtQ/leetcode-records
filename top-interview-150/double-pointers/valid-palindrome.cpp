// link: https://leetcode.cn/problems/valid-palindrome

class Solution {
public:
    // My Solution:
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    bool isPalindrome(string s) {
        string lowercases = "";
        
        for (char c : s) {
            if (isalnum(c)) {
                lowercases += tolower(c);
            }
        }

        int l = 0, r = lowercases.size() - 1;
        while (l <= r) {
            if (lowercases[l] != lowercases[r])
                return false;
            ++l;
            --r;
        }
        
        return true;
    }
};
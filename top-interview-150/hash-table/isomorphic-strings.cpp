// link: https://leetcode.cn/problems/isomorphic-strings

class Solution {
public:
    // My Solution:
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1, mp2;
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            if (
                mp1.contains(s[i]) && mp1[s[i]] != t[i] ||
                mp2.contains(t[i]) && mp2[t[i]] != s[i]
            ) return false;
            else {
                mp1[s[i]] = t[i];
                mp2[t[i]] = s[i];
            }
        }

        return true;
    }
};
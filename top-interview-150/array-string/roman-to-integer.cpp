// link: https://leetcode.cn/problems/roman-to-integer

class Solution {
public:
    // My Solution
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int romanToInt(string s) {
        map<char, int> roman_nums = {
            {'I', 1}, {'V', 5}, {'X', 10}, 
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int n = s.size();
        int ans = 0;

        for (int i = n - 1; i >= 0; --i) {
            if (i < n - 1 && roman_nums[s[i]] < roman_nums[s[i + 1]]) {
                ans -= roman_nums[s[i]];
            } else {
                ans += roman_nums[s[i]];
            }
        }

        return ans;
    }
};
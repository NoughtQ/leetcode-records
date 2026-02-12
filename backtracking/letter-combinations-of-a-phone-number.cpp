// link: https://leetcode.cn/problems/letter-combinations-of-a-phone-number

class Solution {
public:
    // Method: Backtracking
    // Time Complexity: O(3^m * 4^n) 
    // (m, n represent number of digits with 3 and 4 letters respectively)
    // Space Complexity: O(m + n)
    const vector<string> map = {
        "abc", "def", "ghi",
        "jkl", "mno", "pqrs",
        "tuv", "wxyz"
    };
    vector<string> ans;
    string tmp;
    int n;

    vector<string> letterCombinations(string digits) {
        n = digits.length();
        backtracking(0, digits);
        return ans;
    }

    void backtracking(int num, string& digits) {
        if (num == n) {
            ans.push_back(tmp);
            return;
        }

        int idx = digits[num] - '0' - 2;
        for (char c : map[idx]) {
            tmp.push_back(c);
            backtracking(num + 1, digits);
            tmp.pop_back();
        }
    }


};
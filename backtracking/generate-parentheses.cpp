// link: https://leetcode.cn/problems/generate-parentheses

class Solution {
public:
    // Method 1: Backtracking (enumerate all possibilities)
    // Time Complexity: O(4^n * n)
    // Space Compelxity: O(n)
    vector<string> ans;
    string tmp;

    vector<string> generateParenthesis(int n) {
        backtracking(0, 2 * n);
        return ans;
    }

    void backtracking(int num, int len) {
        if (num == len) {
            stack<char> s;
            for (char c : tmp) {
                if (c == '(') {
                    s.push(c);
                } else {
                    if (!s.empty() && s.top() == '(') s.pop();               
                    else return;
                }
            }
            if (s.empty()) ans.push_back(tmp);
            return;
        }

        tmp += '(';
        backtracking(num + 1, len);
        tmp.pop_back();

        tmp += ')';
        backtracking(num + 1, len);
        tmp.pop_back();
    }

    // Method 2: Backtracking (filtering during enumeration to reduce the enumeration amount)
    // Time Complexity: O(4^n / n^{1/2}) (Catalan numbers)
    // Space Compelxity: O(n)
    vector<string> generateParenthesis(int n) {
        backtracking(n, 0, 0);
        return ans;
    }

    void backtracking(int len, int lp, int rp) {
        if (lp + rp == len * 2) {
            ans.push_back(tmp);
            return;
        }

        if (lp < len) {
            tmp += '(';
            backtracking(len, lp + 1, rp);
            tmp.pop_back();
        }

        if (rp < lp) {
            tmp += ')';
            backtracking(len, lp, rp + 1);
            tmp.pop_back();
        }
    }
};
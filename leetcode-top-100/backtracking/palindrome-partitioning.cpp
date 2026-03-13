// link: https://leetcode.cn/problems/palindrome-partitioning

class Solution {
public:
    // Method 1: Backtracking
    // Time Complexity: O(n * 2^n)
    // Space Complexity: O(n^2)
    vector<vector<string>> ans;
    vector<string> sol;
    string tmp;

    vector<vector<string>> partition(string s) {
        backtracking(0, 0, s);   
        return ans; 
    }

    void backtracking(int num, int cnt, string& s) {
        if (num == s.size()) {
            if (!sol.empty() && cnt == s.size())
                ans.push_back(sol);
            return;
        }

        tmp += s[num];
        if (check(tmp)) {
            string origin = tmp;
            sol.push_back(tmp);
            tmp = "";
            backtracking(num + 1, cnt + origin.size(), s);
            sol.pop_back();
            tmp = origin;
        }
        backtracking(num + 1, cnt, s);
        tmp.pop_back();
    }

    bool check(string s) {
        for (int i = 0; i < s.size() / 2; ++i) {
            if (s[i] != s[s.size() - 1 - i]) 
                return false;
        }
        return true;
    }

    // Method 2: Backtracking + DP
    // Time Complexity: O(n * 2^n)
    // Space Complexity: O(n^2)
    vector<vector<bool>> f;

    vector<vector<string>> partition(string s) {
        int n = s.size();
        f.resize(n, vector<bool>(n, true));

        for (int i = n - 1; i >= 0; --i) {
            for (int j = i + 1; j < n; ++j) {
                f[i][j] = (s[i] == s[j]) && f[i + 1][j - 1];
            }
        }

        backtracking(0, s);   
        return ans; 
    }

    void backtracking(int i, const string& s) {
        if (i == s.size()) {
            ans.push_back(sol);
            return;
        }

        for (int j = i; j < s.size(); ++j) {
            if (f[i][j]) {
                sol.push_back(s.substr(i, j - i + 1));
                backtracking(j + 1, s);
                sol.pop_back();
            }
        }
    }
};
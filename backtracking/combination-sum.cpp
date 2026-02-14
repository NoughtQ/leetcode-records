// link: https://leetcode.cn/problems/combination-sum

class Solution {
    // Method: Backtracking
    // Time Complexity: O(n * 2^n)
    // Space Complexity: O(target)
public:
    vector<vector<int>> ans;
    vector<int> tmp;

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtracking(0, 0, target, candidates);
        return ans;
    }

    void backtracking(int idx, int s, int t, vector<int>& c) {
        if (s >= t) {
            if (s == t) ans.push_back(tmp);
            return;
        }

        for (int i = idx; i < c.size(); ++i) {
            tmp.push_back(c[i]);
            backtracking(i, s + c[i], t, c);
            tmp.pop_back();
        }
    }
};
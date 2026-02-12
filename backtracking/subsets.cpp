// link: https://leetcode.cn/problems/subsets

class Solution {
public:
    // Method: Backtracking
    // Time Complexity: O(2^n)
    // Space Complexity: O(n)
    int n;
    vector<vector<int>> ans;
    vector<int> nnums, tmp;

    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        nnums = nums;
        backtracking(0);
        return ans;
    }

    void backtracking(int num) {
        if (num == n) {
            ans.push_back(tmp);
            return;
        }

        backtracking(num + 1);
        tmp.push_back(nnums[num]);
        backtracking(num + 1);
        tmp.pop_back();
    }
};
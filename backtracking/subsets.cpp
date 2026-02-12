// link: https://leetcode.cn/problems/subsets

class Solution {
public:
    // Method 1: Backtracking
    // Time Complexity: O(n * 2^n)
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

    // Method 2: Iteration (binary representation)
    // Time Complexity: O(n * 2^n)
    // Space Complexity: O(n)
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        int n = nums.size();
        int cnt = 1 << n;
        int mask = 0;

        while (mask++ < cnt) {
            tmp.clear();
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i))
                    tmp.push_back(nums[i]);
            }
            ans.push_back(tmp);
        }

        return ans;
    }
};
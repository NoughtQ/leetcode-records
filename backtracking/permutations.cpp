// link: https://leetcode.cn/problems/permutations

class Solution {
public:
    // Method: Backtracking
    // Time Complexity: O(n!)
    // Space Complexity: O(n)
    int n;
    vector<vector<int>> ans;
    vector<bool> visited;
    vector<int> nnums;
    vector<int> tmp;

    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        visited.resize(n, false);
        nnums = nums;
        backtracking(0);
        return ans;
    }

    void backtracking(int num) {
        if (num == n) {
            ans.push_back(tmp);
            return;
        }

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                visited[i] = true;
                tmp.push_back(nnums[i]);
                backtracking(num + 1);
                tmp.pop_back();
                visited[i] = false;
            }
        }
    }
};
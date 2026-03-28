// link: https://leetcode.cn/problems/insert-interval

class Solution {
public:
    // My Solution:
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        bool is_merged = false, cannot_merge = false;

        for (auto interval : intervals) {
            if (is_merged) {
                if (interval[0] <= ans.back()[1]) {
                    ans.back()[1] = max(ans.back()[1], interval[1]);
                } else {
                    ans.push_back(interval);
                }
            } else if (cannot_merge || newInterval[0] > interval[1]) {
                ans.push_back(interval);
            } else if (newInterval[1] < interval[0]) {
                ans.push_back(newInterval);
                ans.push_back(interval);
                cannot_merge = true;
            } else {
                int l = min(interval[0], newInterval[0]);
                int r = max(interval[1], newInterval[1]);
                ans.push_back({l, r});
                is_merged = true;
            }
        }
        if (ans.empty() || newInterval[0] > ans.back()[1]) {
            ans.push_back(newInterval);
        }

        return ans;
    }
};
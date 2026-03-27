// link: https://leetcode.cn/problems/summary-ranges

class Solution {
public:
    // My Solution:
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if (nums.empty()) return ans;

        int n = nums.size(), start = INT_MIN, end;
        for (int i = 0; i < n; ++i) {
            if (!i) start = nums[i];
            if (!i || static_cast<long long>(nums[i]) - nums[i - 1] == 1) {
                end = nums[i];
            } else {
                if (start == end) {
                    ans.emplace_back(to_string(start));
                } else {
                    ans.emplace_back(to_string(start) + "->" + to_string(end));
                }
                start = nums[i];
                end = nums[i];
            }
        }
        if (start != INT_MIN && start == end) {
            ans.emplace_back(to_string(start));
        } else {
            ans.emplace_back(to_string(start) + "->" + to_string(end));
        }

        return ans;
    }
};
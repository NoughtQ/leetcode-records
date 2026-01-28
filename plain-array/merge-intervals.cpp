// link: https://leetcode.cn/problems/merge-intervals/

class Solution {
public:
    // Method: Sorting and Merging
    // Time Complexity: O(nlogn)
    // Space Complexity: O(n)
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int m, n = intervals.size();
        vector<vector<int>> ans;
        
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {
            return a[0] < b[0] || a[0] == b[0] && a[1] < b[1]; 
        });

        ans.push_back(intervals[0]);
        for (int i = 1; i < n; ++i) {
            if (intervals[i][0] <= ans.back()[1])
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            else
                ans.push_back(intervals[i]);
        }

        return ans;
    }
};
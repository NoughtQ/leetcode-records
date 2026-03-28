// link: https://leetcode.cn/problems/minimum-number-of-arrows-to-burst-balloons

class Solution {
public:
    // My Solution:
    // Time Complexity: O(nlogn)
    // Space Complexity: O(1)
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 0, end;
        
        sort(points.begin(), points.end());
        end = points[0][1];
        for (int i = 1; i < points.size(); ++i) {
            if (points[i][0] <= end) {
                end = min(end, points[i][1]);
            } else {
                end = points[i][1];
                ++ans;
            }
        }

        return ans + 1;
    }
};
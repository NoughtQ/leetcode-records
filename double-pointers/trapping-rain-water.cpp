// link: https://leetcode.cn/problems/trapping-rain-water

class Solution {
public:
    // Method 1: Traverse all elements, the water amount at the current height is 
    // the minimum of the highest heights on both sides - current height
    // Time Complexity: O(N)
    // Space Complexity: O(N)
    int trap(vector<int>& height) {
        int n = height.size();
        int area = 0;
        vector<int> lm(n, height[0]), rm(n, height[n - 1]);

        for (int i = 1; i < n; ++i) {
            lm[i] = max(lm[i - 1], height[i]);
        }

        for (int i = n - 2; i >= 0; --i) {
            rm[i] = max(rm[i + 1], height[i]);
        }

        for (int i = 0; i < n; ++i) {
            area += min(lm[i], rm[i]) - height[i];
        }

        return area;
    }

    // Method 2: Double Pointers
    // It is recommended to draw some diagrams for better understanding of the code
    // Time Complexity: O(N)
    // Space Complexity: O(1)
    int trap(vector<int>& height) {
        int n = height.size();
        int area = 0;
        int l = 0, r = n - 1;
        int lm, rm;

        while (l < r) {
            lm = max(lm, height[l]);
            rm = max(rm, height[r]);
            if (lm < rm) {
                area += (lm - height[l]);
                ++l;
            } else {
                area += (rm - height[r]);
                --r;
            }
        }

        return area;
    }
};
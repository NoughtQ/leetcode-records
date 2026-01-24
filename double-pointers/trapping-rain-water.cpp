// link: https://leetcode.cn/problems/trapping-rain-water

class Solution {
public:
    // Method 1: Traverse all elements, the water amount at the current height is 
    // the minimum of the highest heights on both sides - current height
    // Time complexity: O(N^2) (cannot pass tests of large-scale data)
    int trap(vector<int>& height) {
        int n = height.size();
        int area = 0;
        int l = 0, r = 1;

        for (int i = 1; i < n - 1; ++i) {
            l = height[i];
            r = height[i];
            for (int j = i - 1; j >= 0; --j) {
                l = max(height[j], l);
            }
            for (int k = i + 1; k < n; ++k) {
                r = max(height[k], r);
            }
            area += max(0, min(l, r) - height[i]);
        }

        return area;
    }

    // Method 2: Double Pointers
    // It is recommended to draw some diagrams for better understanding of the code
    // Time Complexity: O(N)
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
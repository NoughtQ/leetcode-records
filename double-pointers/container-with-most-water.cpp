// link: https://leetcode.cn/problems/container-with-most-water

class Solution {
public:
    // Official Solution
    // 每次移动指向最小数的指针，否则面积就不会变大（因为原本的面积就是两指针间距 * 指向的最小数）
    int maxArea(vector<int>& height) {
        int size = height.size();
        int p1 = 0, p2 = size - 1;
        int max_area = 0;

        while (p1 < p2) {
            max_area = max(max_area, (p2 - p1) * min(height[p1], height[p2]));
            if (height[p1] < height[p2]) {
                ++p1;
            } else {
                --p2;
            }
        }
        return max_area;
    }
};
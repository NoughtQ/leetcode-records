// link: https://leetcode.cn/problems/pascals-triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> nums(numRows);
        for (int i = 0; i < numRows; ++i) {
            nums[i] = vector<int>(i+1);
            for (int j = 0; j <= i; ++j) {
                if (j == 0 || j == i)
                    nums[i][j] = 1;
                else
                    nums[i][j] = nums[i-1][j] + nums[i-1][j-1];
            }
        }
        return nums;
    }
};
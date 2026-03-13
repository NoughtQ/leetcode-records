// link: https://leetcode.cn/problems/single-number

class Solution {
public:
    // Idea: Use XOR operation
    //       a ^ a = 0, a ^ 0 = a
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        int size = nums.size();
        for (int i = 0; i < size; ++i)
            ans ^= nums[i];
        return ans;
    }
};
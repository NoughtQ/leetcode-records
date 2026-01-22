// link: https://leetcode.cn/problems/majority-element

class Solution {
public:
    // My Solution: hash table
    // Time complexity: O(n)
    // Space complexity: O(n)
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> records;
        int max_num, max_cnt = 0;
        for (int num : nums) {
            if (records.contains(num)) {
                ++records[num];
            } else {
                records[num] = 1;
            }
            if (records[num] > max_cnt) {
                max_num = num;
                max_cnt = records[num];
            }
        }
        return max_num;
    }

    // Official Solution: Boyer-Moore voting algorithm
    // Time complexity: O(n)
    // Space complexity: O(1)
    // Post: https://zhuanlan.zhihu.com/p/76518429
    int majorityElement(vector<int>& nums) {
        int candidate, cnt = 0;
        for (int num : nums) {
            if (!cnt) {
                candidate = num;
            }
            if (num == candidate) {
                ++cnt;
            } else {
                --cnt;
            }
        }
        return candidate;
    }
};
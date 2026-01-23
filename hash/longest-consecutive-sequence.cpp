// link: https://leetcode.cn/problems/longest-consecutive-sequence

class Solution {
public:
    // Official Solution (modified):
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> t;
        int cur, cnt, max_len = 0;

        for (int num : nums) {
            t.insert(num);
        }
        
        for (const auto& elem : t) {
            // 如果前面的数字检验过的话，那当前数字一定被遍历过，无需再次检验
            if (!t.contains(elem - 1)) {
                cnt = 1;
                cur = elem;
                while (t.contains(++cur)) {
                    ++cnt;
                }
                max_len = max(max_len, cnt);
            }
        }

        return max_len;
    }
};
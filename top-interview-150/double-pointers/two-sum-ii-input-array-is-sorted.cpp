// link: https://leetcode.cn/problems/two-sum-ii-input-array-is-sorted

class Solution {
public:
    // My Solution: Hash Table (but not allowed in the question QAQ)
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> ht;
        int n = numbers.size();
        vector<int> ans;

        for (int i = 0; i < n; ++i) {
            if (!ht.empty() && ht.contains(target - numbers[i])) {
                ans.emplace_back(ht[target - numbers[i]]);
                ans.emplace_back(i + 1);
                break;
            }
            ht[numbers[i]] = i + 1;
        }

        return ans;
    }

    // Official Solution: Double Pointers
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while (l <= r) {
            if (numbers[l] + numbers[r] == target) {
                return {l + 1, r + 1};
            } else if (numbers[l] + numbers[r] < target) {
                ++l;
            } else {
                --r;
            }
        }
        return {-1, -1};
    }
};
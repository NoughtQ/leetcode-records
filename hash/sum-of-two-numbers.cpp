class Solution {
public:
    // brute search (can pass all tests, but too slow (O(n^2)))
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            for (int j = i + 1; j < len; ++j) {
                if (i != j && nums[i] + nums[j] == target) {
                    ans = {i, j};
                    break;
                }
            }
        }
        return ans;
    }

    // hash table
    // save elements have accessed for fast search in the near future
    // time complexity: O(n)
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> accessed;
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            auto it = accessed.find(target - nums[i]);
            if (it != accessed.end()) {
                return {i, it->second};
            }
            accessed.emplace(nums[i], i);
        }
        return {-1, -1};
    }
};
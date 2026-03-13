// link: https://leetcode.cn/problems/top-k-frequent-elements

class Solution {
public:
    // Method 1: Heap
    // Time Complexity: O(nlogk)
    // Space Complexity: O(n)
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>> heap;
        vector<int> ans;
        int n = nums.size();

        for (int num : nums) ++mp[num];
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            heap.push({it->second, it->first});
        }
        while (k--) {
            ans.push_back(heap.top().second);
            heap.pop();
        }
        
        return ans;
    }

    // Method 2: Bucket Sort (by 灵茶山艾府)
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<vector<int>> buckets;
        vector<int> ans;
        int n = nums.size(), max_cnt = 0;
        bool flag = true;

        for (int num : nums) {
            ++mp[num];
            max_cnt = max(max_cnt, mp[num]);
        }

        buckets.resize(max_cnt + 1);
        for (auto& [elem, cnt] : mp) {
            buckets[cnt].push_back(elem);
        }

        for (int i = max_cnt; i > 0 && ans.size() < k; --i) {
            ans.insert(ans.end(), buckets[i].begin(), buckets[i].end());
        }
        
        return ans;
    }
};
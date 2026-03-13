// link: https://leetcode.cn/problems/jump-game

class Solution {
public:
    // Method 1: Queue + Hash Table
    // Time Complexity: O(n^2)
    // Spac Complexity: O(n)
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return true;

        queue<int> q;
        unordered_set<int> ht;
        q.push(0);
        ht.insert(0);
        while (!q.empty()) {
            int idx = q.front();
            for (int i = idx + 1; i <= idx + nums[idx]; ++i) {
                if (i == n - 1) return true;
                if (ht.contains(i)) continue;
                q.push(i);
                ht.insert(i);
            }
            q.pop();
        }

        return false;
    }

    // Method 2: Greedy
    // Time Complexity: O(n)
    // Spac Complexity: O(1)
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int rightmost = 0;

        for (int i = 0; i < n; ++i) {
            if (i <= rightmost) {
                rightmost = max(rightmost, i + nums[i]);
                if (rightmost >= n - 1) return true;
            }
        }

        return false;
    }
};
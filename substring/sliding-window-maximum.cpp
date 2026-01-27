// link: https://leetcode.cn/problems/sliding-window-maximum

class Solution {
public:
    // Method 1: Use multiset as sliding window 
    // (similar to priority queue, but it supports deleting specific elements)
    // Time Complexity: O(nlogk)
    // Space Complexity: O(k)
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        multiset<int> window(nums.begin(), nums.begin() + k);
        
        // *window.rbegin() returns maximum value in the multiset
        ans.push_back(*window.rbegin());
        for (int i = k; i < n; ++i) {
            // Avoid deleting all elements with the same value
            auto it = window.find(nums[i - k]);
            if (it != window.end())
                window.erase(it);
            window.insert(nums[i]);
            ans.push_back(*window.rbegin());
        }

        return ans;
    }

    // Method 2: Priority Queue (a bit more troublesome)
    // Same time & space complexity with Method 1
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        priority_queue<pair<int, int>> window;
        
        for (int i = 0; i < k; ++i) {
            window.push({nums[i], i});
        }

        ans.push_back(window.top().first);
        for (int i = k; i < n; ++i) {
            while (!window.empty() && window.top().second <= i - k)
                window.pop();
            window.push({nums[i], i});
            ans.push_back(window.top().first);
        }

        return ans;
    }

    // Method 3: Monotonic (Bidirectional) Queue
    // The elements of the queue are the indices of nums, 
    // and ensures that values corresponding to these indices are strictly monotonically decreasing
    // Time Complexity: O(n)
    // Space Complexity: O(k)
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        deque<int> window;
        
        for (int i = 0; i < k; ++i) {
            while (!window.empty() && nums[i] >= nums[window.back()]) {
                window.pop_back();
            }
            window.push_back(i);
        }
        ans.push_back(nums[window.front()]);
        
        for (int i = k; i < n; ++i) {
            while (!window.empty() && nums[i] >= nums[window.back()])
                window.pop_back();
            // Remove elements outside the sliding window range
            while (!window.empty() && window.front() <= i - k) {
                window.pop_front();
            }
            window.push_back(i);
            ans.push_back(nums[window.front()]);
        }

        return ans;
    }

    // Method 4: Chunking + Preprocessing
    // Divide nums into multiple blocks of size k
    // Calculate the prefix sum and suffix sum of all elements within each block
    // The maximum value within the sliding window [i, i + k - 1] is max(sm[i], pm[i + k - 1])
    //   i        j      i + k - 1       (j is a multiple of k)
    //   | suffix |  prefix  |
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        vector<int> pm(n), sm(n);
        
        for (int i = 0; i < n; ++i) {
            if (i % k == 0) {
                pm[i] = nums[i];
            } else {
                pm[i] = max(pm[i - 1], nums[i]);
            }
        }

        for (int i = n - 1; i >= 0; --i) {
            if (i == n - 1 || (i + 1) % k == 0) {
                sm[i] = nums[i];
            } else {
                sm[i] = max(sm[i + 1], nums[i]);
            }
        }

        for (int i = 0; i <= n - k; ++i) {
            ans.push_back(max(sm[i], pm[i + k - 1]));
        }

        return ans;
    }
};
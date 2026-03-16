// link: https://leetcode.cn/problems/h-index

class Solution {
public:
    // My Solution
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int ans = 0;

        for (int i = 1; i <= n; ++i) {
            int cnt = 0;
            for (int j = 0; j < n; ++j) {
                if (citations[j] >= i) ++cnt;
            }
            if (cnt >= i) ans = max(ans, i);
        }

        return ans;
    }

    // Method 2: Sorting
    // Time Complexity: O(nlogn)
    // Space Complexity: O(1)
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int i = n - 1, h = 0;

        sort(citations.begin(), citations.end());
        while (i >= 0 && citations[i] > h) {
            ++h;
            --i;
        }

        return h;
    }

    // Method 3: Counting Sorting
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int tot = 0;
        vector<int> cnt(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            if (citations[i] >= n) {
                ++cnt[n];
            } else {
                ++cnt[citations[i]];
            }
        }

        for (int i = n; i >= 0; --i) {
            tot += cnt[i];
            if (tot >= i) {
                return i;
            }
        }

        return 0;
    }
};
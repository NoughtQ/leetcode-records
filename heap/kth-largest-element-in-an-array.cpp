// link: https://leetcode.cn/problems/kth-largest-element-in-an-array

class Solution {
public:
    // Method 1: use STL (priority_queue (max-heap)) (doge)
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());

        --k;
        while (k--) pq.pop();

        return pq.top();
    }

    // Method 2: Quick Selection Algorithm (by 灵茶山艾府)
    // Time Complexity: O(n) (n + n/2 + n/4 + ...)
    // Space Complexity: O(1) 
    int partition(vector<int>& nums, int l, int r) {
        int i, j, pivot;
        i = l + rand() % (r - l + 1);
        pivot = nums[i];
        swap(nums[l], nums[i]);

        i = l + 1;
        j = r;
        while (true) {
            while (i <= j && nums[i] < pivot) ++i;
            while (i <= j && nums[j] > pivot) --j;
            if (i >= j) break;
            swap(nums[i], nums[j]);
            ++i;
            --j;
        }
        swap(nums[l], nums[j]);
        return j;
    }

    int findKthLargest(vector<int>& nums, int k) {
        srand(time(NULL));
        int target_index = nums.size() - k;
        int l = 0, r = nums.size() - 1;

        while (true) {
            int i = partition(nums, l, r);
            if (i == target_index) {
                return nums[i];
            } else if (i > target_index) {
                r = i - 1;
            } else {
                l = i + 1;
            }
        }
    }
};
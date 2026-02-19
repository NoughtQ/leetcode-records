// link: https://leetcode.cn/problems/median-of-two-sorted-arrays

class Solution {
public:
    // Method: Binary Search
    // Time Complexity: O(log n)
    // Space Complexity: O(1) (no extra space used)
    double getKthElement(const vector<int>& nums1, const vector<int>& nums2, int k) {
        int m = nums1.size(), n = nums2.size();
        int idx1 = 0, idx2 = 0, new_idx1, new_idx2;
        int pivot1, pivot2;

        while (true) {
            // boundary cases
            if (idx1 == m) {  // nums1 has no remaining elements
                return nums2[idx2 + k - 1];
            }
            if (idx2 == n) {  // nums2 has no remaining elements
                return nums1[idx1 + k - 1];
            }        
            if (k == 1) {  // first (smallest) element
                return min(nums1[idx1], nums2[idx2]);
            }

            // normal cases
            new_idx1 = min(idx1 + k / 2 - 1, m - 1);
            new_idx2 = min(idx2 + k / 2 - 1, n - 1);
            pivot1 = nums1[new_idx1];
            pivot2 = nums2[new_idx2];
            // The smaller pivot is greater than at most the previous k-2 elements, 
            // so the elements before it cannot be the k-th element 
            // -> move the index forward and update k
            if (pivot1 <= pivot2) {
                k -= new_idx1 - idx1 + 1;
                idx1 = new_idx1 + 1;
            } else {
                k -= new_idx2 - idx2 + 1;
                idx2 = new_idx2 + 1;   
            }
        } 
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len = nums1.size() + nums2.size();
        if (len % 2 == 1) {
            return getKthElement(nums1, nums2, (len + 1) / 2);
        } else {
            return (getKthElement(nums1, nums2, len / 2) + getKthElement(nums1, nums2, len / 2 + 1)) / 2.0;
        }
    }
};
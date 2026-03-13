class Solution {
public:
    // My Solution
    // Time Complexity: O(m + n) (actually 2m + n)
    // Space Complexity: O(1)
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = n, p2 = 0, p = 0;

        for (int i = m - 1; i >= 0; --i) {
            nums1[n + i] = nums1[i];
        }

        while (m > 0 && p1 < m + n && p2 < n) {
            if (nums1[p1] <= nums2[p2]) {
                nums1[p++] = nums1[p1++]; 
            } else {
                nums1[p++] = nums2[p2++]; 
            }
        }

        while (m > 0 && p1 < m + n) {
            nums1[p++] = nums1[p1++]; 
        }

        while (p2 < n) {
            nums1[p++] = nums2[p2++]; 
        }
    }

    // Official Solution
    // Time Complexity: O(m + n) (actually m + n)
    // Space Complexity: O(1)
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1, p2 = n - 1, p = m + n - 1;

        // reversely sort
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] >= nums2[p2]) {
                nums1[p--] = nums1[p1--]; 
            } else {
                nums1[p--] = nums2[p2--]; 
            }
        }

        while (p1 >= 0) {
            nums1[p--] = nums1[p1--]; 
        }

        while (p2 >= 0) {
            nums1[p--] = nums2[p2--]; 
        }
    }
};
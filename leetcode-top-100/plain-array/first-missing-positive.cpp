// link: https://leetcode.cn/problems/first-missing-positive

class Solution {
public:
    // Method 1: Hash Table
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> ht;
        int ans = 1;

        for (int num : nums)
            ht.insert(num);
        
        while (ht.contains(ans)) ++ans;

        return ans;
    }

    // Method 2: Hash Table without new variables
    // Since we are only concerned with the numbers [1, N] (where N is the length of the array, and the 
    // answer is definitely within [1, N+1]), we can directly use the input array as a hash table: mark 
    // whether the element at index i contains the value i + 1 within the array, using a negative sign 
    // to indicate the presence of the element (we convert non-positive numbers to N + 1 in advance, as 
    // we are not interested in these numbers). In fact, we process it in reverse: when we encounter an 
    // element with an absolute value of i + 1, we negate the element at index i (if it is already 
    // negative, we do not negate it again). Finally, when traversing the array, we return the index + 1 
    // of the first positive element encountered, or return N + 1 if all elements become negative.
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            if (nums[i] <= 0)
                nums[i] = n + 1;
        }

        for (int num : nums) {
            if (abs(num) <= n && nums[abs(num) - 1] > 0) {
                nums[abs(num) - 1] = -nums[abs(num) - 1];
            }
        }
            
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0)
                return i + 1;
        }

        return n + 1;
    }

    // Method 3: Substitution
    // By swapping elements, process the array so that elements x with values in [1, N] 
    // are located at index x - 1
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                swap(nums[nums[i] - 1], nums[i]);
            }
        }

        for (int i = 0; i < n; ++i) {
            if (nums[i] != i + 1)
                return i + 1;
        }

        return n + 1;
    }
};
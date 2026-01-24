// link: https://leetcode.cn/problems/3sum

class Solution {
public:
    // Method 1: Brute Force (O(N^3))
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> tmp(3);
        int s = nums.size();

        for (int i = 0; i < s; ++i)
            for (int j = i + 1; j < s; ++j)
                for (int k = j + 1; k < s; ++k) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        tmp = {nums[i], nums[j], nums[k]};
                        sort(tmp.begin(), tmp.end());  
                        ans.insert(tmp);           
                    }
                }

        return vector<vector<int>>(ans.begin(), ans.end());
    }

    // Defective product: Although the time complexity is O(N^2), 
    // there are a large number of modification operations on the hash table within the loop, 
    // resulting in a very large constant time and making it unable to pass tests with large-scale data.
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        unordered_set<int> ht;
        vector<int> tmp(3);
        int s = nums.size();
            
        for (int i = 0; i < s; ++i) {
            ht.clear();
            for (int j = 0; j < s; ++j) {
                if (j == i)
                    continue;
                if (ht.contains(-nums[i] - nums[j])) {
                    tmp = {nums[i], nums[j], -nums[i] - nums[j]};
                    sort(tmp.begin(), tmp.end());
                    ans.insert(tmp);
                }
                ht.insert(nums[j]);
            }
        }

        return vector<vector<int>>(ans.begin(), ans.end());
    }

    // Correct Solution: Double-Pointer
    // O(N^2) but less constant time
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int l, r;
        
        // Sorted for easy deduplication and movement of the two pointers
        sort(nums.begin(), nums.end());

        // The minimum number > 0 means it is impossible to achieve a sum of three numbers equal to 0
        if (nums[0] > 0) return ans;     
        
        for (int i = 0; i < n; ++i) {
            // Deduplication
            if (i > 0 && nums[i-1] == nums[i]) continue;
            
            l = i + 1;
            r = n - 1;
            while (l < r) {
                if (nums[l] + nums[r] < -nums[i]) {
                    ++l;
                } else if (nums[l] + nums[r] > -nums[i]) {
                    --r;
                } else {
                    ans.push_back({nums[l], nums[r], nums[i]});
                    ++l;
                    --r;
                    while (l < r && nums[l-1] == nums[l]) ++l;
                    while (l < r && nums[r+1] == nums[r]) --r;
                }
            }
        }

        return ans;
    }
};
// link: https://leetcode.cn/problems/climbing-stairs

class Solution {
public:
    // My Solution
    int climbStairs(int n) {
        int p, q, r;
        for (int i = 1; i <= n; ++i) {
            if (i == 1)
                arr[i] = 1;
            else if (i == 2)
                arr[i] = 2;
            else 
                arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
    }

    // Official Solution (space complexity is reduced to O(1))
    int climbStairs(int n) {
        int p, q = 0, r = 1;
        for (int i = 0; i < n; ++i) {
            p = q;
            q = r;
            r = p + q;
        }
        return r;
    }
};
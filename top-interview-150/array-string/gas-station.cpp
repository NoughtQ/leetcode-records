// link: https://leetcode.cn/problems/gas-station

class Solution {
public:
    // My Solution (cannot pass all tests)
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();

        for (int i = 0; i < n; ++i) {
            int capacity = gas[i], j = (i + 1) % n;
            do {
                capacity -= cost[(j - 1 + n) % n];
                if (capacity < 0) break;
                capacity += gas[j];
                j = (j + 1) % n;
            } while (capacity > 0 && j != (i + 1) % n);
            if (capacity >= 0 && j == (i + 1) % n) return i;
        }

        return -1;
    }

    // Official Solution 
    // (cannot reach from x to y -> cannot reach from z to y, where z is in [x, y])
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size(), start = 0;

        while (start < n) {
            int cnt = 0, tot_gas = 0, tot_cost = 0;
            while (cnt < n) {
                tot_gas += gas[(start + cnt) % n];
                tot_cost += cost[(start + cnt) % n];
                ++cnt;
                if (tot_gas < tot_cost) break;
            }
            if (tot_gas >= tot_cost) return start;
            start += cnt;
        }

        return -1;
    }
};
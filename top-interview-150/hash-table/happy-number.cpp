// link: https://leetcode.cn/problems/happy-number

class Solution {
public:
    // My Solution:
    bool isHappy(int n) {
        unordered_set<int> ht;

        while (n != 1) {
            int new_n = 0;
            while (n > 0) {
                new_n += pow(n % 10, 2);
                n /= 10;
            }
            if (ht.contains(new_n)) return false;
            ht.insert(new_n);
            n = new_n;
        }

        return true;
    }

    // Method 2: Double-Pointer (fast & slow pointer)
    // Space Complexity: O(1)
    int next(int n) {
        int new_n = 0;
        while (n > 0) {
            new_n += pow(n % 10, 2);
            n /= 10;
        }
        return new_n;
    }

    bool isHappy(int n) {
        if (n == 1) return true;
        int f = n, s = n;

        do {
            f = next(next(f));
            s = next(s);
        } while (f != 1 && f != s);

        return f == 1;
    }
};
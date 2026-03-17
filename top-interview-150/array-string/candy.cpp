// link: https://leetcode.cn/problems/candy

class Solution {
public:
    // My Solution
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int cnt, i = 1;
        vector<int> candies(n, 1);

        cnt = candies[0];
        while (i < n) {
            if (ratings[i] > ratings[i - 1]) {
                while (i < n && ratings[i] > ratings[i - 1]) {
                    candies[i] = candies[i - 1] + 1;
                    ++i;
                }
            } else if (ratings[i] < ratings[i - 1]) {
                cnt = 0;
                while (i < n && ratings[i] < ratings[i - 1]) {
                    ++cnt;
                    ++i;
                }
                int pos = i - 1;
                for (int j = 0; j < cnt; ++j) {
                    candies[pos - j - 1] = max(candies[pos - j - 1], candies[pos - j] + 1);
                }
            } else {
                ++i;
            }
        }

        return accumulate(candies.begin(), candies.end(), 0);
    }

    // Official Solution
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int cnt = 1;
        int inc = 1, dec = 0, pre = 1;

        for (int i = 1; i < n; ++i) {
            if (ratings[i] >= ratings[i - 1]) {
                dec = 0;
                pre = ratings[i] == ratings[i - 1] ? 1 : pre + 1;
                cnt += pre;
                inc = pre;
            } else {
                ++dec;
                if (dec == inc) ++dec;
                cnt += dec;
                pre = 1;
            }
        }

        return cnt;
    }
};
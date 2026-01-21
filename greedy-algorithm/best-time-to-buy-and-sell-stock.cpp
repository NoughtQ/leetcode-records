// link: https://leetcode.cn/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int m = 100001;

        for (int p : prices) {
            ans = max(ans, p - m);
            m = min(m, p);
        }
        return ans;
    }
};
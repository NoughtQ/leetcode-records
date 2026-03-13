// link: https://leetcode.cn/problems/daily-temperatures

class Solution {
public:
    // Method: Auxiliary Stack
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st;

        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) 
                st.pop();
            ans[i] = (st.empty()) ? 0 : st.top() - i;
            st.push(i);
        }

        return ans;
    }
};
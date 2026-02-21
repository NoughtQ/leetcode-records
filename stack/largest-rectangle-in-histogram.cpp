// link: https://leetcode.cn/problems/largest-rectangle-in-histogram
// solution: https://leetcode.cn/problems/largest-rectangle-in-histogram/solutions/2695467/dan-diao-zhan-fu-ti-dan-pythonjavacgojsr-89s7/

class Solution {
public:
    // Method 1: Monotonic Stack (three loops)
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        int n = heights.size();
        stack<int> st;
        vector<int> left(n, -1), right(n, n);

        for (int i = 0; i < n; ++i) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (!st.empty()) {
                left[i] = st.top();
            }
            st.push(i);
        }

        st = stack<int>();
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (!st.empty()) {
                right[i] = st.top();
            }
            st.push(i);
        }

        for (int i = 0; i < n; ++i) {
            ans = max(ans, heights[i] * (right[i] - left[i] - 1));
        }

        return ans;
    }

    // Method 2: Monotonic Stack (two loops)
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        int n = heights.size();
        stack<int> st;
        vector<int> left(n, -1), right(n, n);

        for (int i = 0; i < n; ++i) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                right[st.top()] = i;
                st.pop();
            }
            if (!st.empty()) {
                left[i] = st.top();
            }
            st.push(i);
        }

        for (int i = 0; i < n; ++i) {
            ans = max(ans, heights[i] * (right[i] - left[i] - 1));
        }

        return ans;
    }

    // Method 3: Monotonic Stack (one loop)
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        heights.push_back(-1);   // for clearing the stack 
        int n = heights.size();
        stack<int> st;
        st.push(-1);             // for the case where there is only one number in the stack

        for (int right = 0; right < n; ++right) {
            while (st.size() > 1 && heights[st.top()] >= heights[right]) {
                int i = st.top();
                st.pop();
                int left = st.top();
                ans = max(ans, heights[i] * (right - left - 1));
            }
            st.push(right);
        }

        return ans;
    }
};
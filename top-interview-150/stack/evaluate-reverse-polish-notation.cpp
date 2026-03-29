// link: https://leetcode.cn/problems/evaluate-reverse-polish-notation

class Solution {
public:
    // My Solution:
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        const std::regex reg(R"(^[-+]?\d+$)");

        for (auto token : tokens) {
            if (regex_match(token, reg)) {
                st.push(token);
            } else {
                int second = stoi(st.top());
                st.pop();
                int first = stoi(st.top());
                st.pop();
                int result;
                if (token == "+") {
                    result = first + second;
                } else if (token == "-") {
                    result = first - second;
                } else if (token == "*") {
                    result = first * second;
                } else {
                    result = first / second;
                }
                st.push(to_string(result));
            }
        }

        return stoi(st.top());
    }
};
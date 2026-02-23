// link: https://leetcode.cn/problems/partition-labels

class Solution {
public:
    // Method: Greedy
    // Space Complexity: O(n)
    // Time Complexity: O(|Sigma|) (|Sigma| = 26)
    vector<int> partitionLabels(string s) {
        vector<int> last(26, -1);
        vector<int> ans;
        int n = s.size();
        int start = 0, end;
        
        for (int i = 0; i < n; ++i) {
            last[s[i] - 'a'] = i;
        }

        while (start < n) {
            end = last[s[start] - 'a'];
            int i = start + 1;
            while (i < end) {
                end = max(end, last[s[i++] - 'a']);
            }
            ans.push_back(end - start + 1);
            start = end + 1;
        }

        return ans;
    }
};
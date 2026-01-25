// link: https://leetcode.cn/problems/find-all-anagrams-in-a-string

class Solution {
public:
    // My Solution: Sliding Window
    // Time Complexity: O(N)
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int m = p.length();
        int l, r;
        vector<int> ans;
        unordered_map<char, int> p_count, s_count;

        for (int i = 0; i < m; ++i) {
            ++p_count[p[i]];
            ++s_count[s[i]];
        }

        if (s_count == t) {
            ans.push_back(0);
        }

        for (int i = 0; i < n - m; ++i) {
            if (s_count[s[i]] == 1) {
                s_count.erase(s[i]);
            } else {
                --s_count[s[i]];
            }
            ++s_count[s[i + m]];
            if (s_count == p_count) {
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};
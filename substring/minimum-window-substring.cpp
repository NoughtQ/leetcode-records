// link: https://leetcode.cn/problems/minimum-window-substring

class Solution {
public:
    // Method: Sliding Window
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    unordered_map<char, int> w_count, t_count;

    string minWindow(string s, string t) {
        int m = s.length(), n = t.length();
        string ans = "";
        int l = 0, r = 0, max_len = 0;

        for (int i = 0; i < n; ++i)
            ++t_count[t[i]];
        
        while (l <= r && r < m) {
            if (t_count.contains(s[r])) {
                ++w_count[s[r]];
            }
            ++r;
            if (check()) {
                while (l <= r) {
                    if (t_count.contains(s[l])) {
                        if (w_count[s[l]] > t_count[s[l]]) {
                            --w_count[s[l]];
                        } else {
                            break;
                        }
                    }
                    ++l;
                }
                int new_len = r - l;
                if (ans.empty() || new_len < max_len) {
                    ans = s.substr(l, new_len);
                    max_len = ans.length();
                }
                --w_count[s[l++]];
            }
        }

        return ans;
    }

    bool check(void) {
        for (auto it = t_count.begin(); it != t_count.end(); ++it) {
            if (!w_count.contains(it->first) || w_count[it->first] < t_count[it->first])
                return false;
        }
        return true;
    }
};
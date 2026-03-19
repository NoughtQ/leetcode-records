// link: https://leetcode.cn/problems/longest-common-prefix

// My Solution: Tries
class Tries {
private:
    bool is_end;
    Tries* next[26];

public:
    Tries(): is_end(false) {
        memset(next, 0, sizeof(next));
    }

    void insert(string s) {
        Tries *node = this;
        for (char c : s) {
            if (!node->next[c - 'a']) {
                node->next[c - 'a'] = new Tries();
            }
            node = node->next[c - 'a'];
        }
        node->is_end = true;
    }

    string common_prefix() {
        Tries *node = this;
        string ans = "";
        bool flag = true;

        while (!node->is_end) {
            char c = '0';
            for (int i = 0; i < 26; ++i) {
                if (node->next[i]) {
                    if (c != '0') {
                        flag = false;
                        break;
                    } else {
                        c = i + 'a';
                    }
                }
            }
            if (!flag || c == '0') break;
            ans += c;
            node = node->next[c - 'a'];
        }

        return ans;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        Tries* tries = new Tries();
        for (string s : strs) {
            tries->insert(s);
        }
        return tries->common_prefix();
    }

    // Simpler Solution (thanks to 灵茶山艾府)
    string longestCommonPrefix(vector<string>& strs) {
        int m = strs.size(), n = strs[0].size();

        for (int len = 0; len < n; ++len) {
            for (int j = 1; j < m; ++j) {
                if (strs[j][len] != strs[0][len]) {
                    return strs[0].substr(0, len);
                }
            }
        }

        return strs[0];
    }
};


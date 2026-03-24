// link: https://leetcode.cn/problems/substring-with-concatenation-of-all-words

class Solution {
public:
    // Solution by @灵茶山艾府
    // Time Complexity: O((n + m) * wordLen)
    // Space Complexity: O(m * wordLen)
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        unordered_map<string, int> target_cnt;
        const int n = words.size(), len = s.size();
        const int word_len = words[0].size(), window_len = word_len * n;
        
        for (string word: words) {
            ++target_cnt[word];
        }

        for (int start = 0; start < word_len; ++start) {
            unordered_map<string, int> cnt;
            int overload = 0;
            for (int r = start + word_len; r <= len; r += word_len) {
                string in_word = s.substr(r - word_len, word_len);
                if (cnt[in_word] == target_cnt[in_word]) ++overload;
                ++cnt[in_word];

                int l = r - window_len;
                if (l < 0) continue;
                if (!overload) ans.emplace_back(l);

                string out_word = s.substr(l, word_len);
                --cnt[out_word];
                if (cnt[out_word] == target_cnt[out_word]) --overload;
            }
        }

        return ans;
    }
};
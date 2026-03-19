// link: https://leetcode.cn/problems/reverse-words-in-a-string

class Solution {
public:
    // My Solution (lazy way :)
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<string> split_by_space(const string& s) {
        vector<string> tokens;
        string token;
        istringstream token_stream(s);

        while (token_stream >> token) {
            tokens.emplace_back(token);
        }

        return tokens;
    }

    string reverseWords(string s) {
        string ans = "";
        vector<string> words = split_by_space(s);
        int n = words.size();
        for (int i = n - 1; i >= 0; --i) {
            if (i != n - 1) ans += ' ';
            ans += words[i];
        }
        return ans;
    }

    // Official Solution: Deque
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    string reverseWords(string s) {
        int l = 0, r = s.size() - 1;
        string word = "", ans = "";
        deque<string> dq;
        
        while (l <= r && s[l] == ' ') ++l;
        while (l <= r && s[r] == ' ') --r;

        while (l <= r) {
            if (s[l] == ' ') {
                if (!word.empty())
                    dq.push_front(word);
                word = "";
            } else {
                word += s[l];
            }
            ++l;
        }
        dq.push_front(word);

        while (!dq.empty()) {
            if (!ans.empty()) ans += ' ';
            ans += dq.front();
            dq.pop_front();
        }

        return ans;
    }
};
// link: https://leetcode.cn/problems/text-justification

class Solution {
public:
    // My Solution:
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans, buf;
        string row = "";
        int cnt = 0, tot_space, num_space, rem;

        for (string word : words) {
            if (word.size() + cnt + buf.size() > maxWidth) {
                tot_space = maxWidth - cnt;
                if (buf.size() > 1) {
                    num_space = tot_space / (buf.size() - 1);
                    rem = tot_space % (buf.size() - 1);
                    for (string w : buf) {
                        if (!row.empty()) {
                            row.append(num_space, ' ');
                            if (rem-- > 0) row += ' ';
                        }
                        row += w;
                    }
                } else {
                    row += buf[0];
                    row.append(maxWidth - buf[0].size(), ' ');
                }
                ans.emplace_back(row);
                cnt = 0;
                row = "";
                buf.clear();
            }
            cnt += word.size();
            buf.emplace_back(word);
        }

        for (string w : buf) {
            if (!row.empty()) row += ' ';
            row += w;
        }
        if (row.size() < maxWidth) {
            row.append(maxWidth - row.size(), ' ');
        }
        ans.emplace_back(row);

        return ans;
    }
};
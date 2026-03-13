// link: https://leetcode.cn/problems/group-anagrams

class Solution {
public:
    // My Solution: Use sorted strings as keys of hash table
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> t;
        vector<vector<string>> ans;
        string h_val;
        for (string s : strs) {
            h_val = s;
            sort(h_val.begin(), h_val.end());
            t[h_val].push_back(s);
        }
        for (auto it = t.begin(); it != t.end(); ++it) {
            ans.push_back(it->second);
        }
        return ans;
    }

    // Official Solution (modified): Use letter counts in strings as keys
    // Problem: cannot handle the situation where the character appears more than 9 times
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> t;
        vector<vector<string>> ans;
        for (string s : strs) {
            string h_val = string(26, 0);
            for (char c : s) {
                ++h_val[c - 'a'];
            }
            t[h_val].push_back(s);
        }
        for (auto it = t.begin(); it != t.end(); ++it) {
            ans.push_back(it->second);
        }
        return ans;
    }
};
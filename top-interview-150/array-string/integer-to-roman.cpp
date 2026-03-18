// link: https://leetcode.cn/problems/integer-to-roman

class Solution {
public:
    // My Solution:
    string intToRoman(int num) {
        const map<int, char> table = {
            {1, 'I'}, {5, 'V'}, {10, 'X'}, {50, 'L'},
            {100, 'C'}, {500, 'D'}, {1000, 'M'}
        };
        const map<int, string> table_49 = {
            {4, "IV"}, {9, "IX"}, 
            {40, "XL"}, {90, "XC"},
            {400, "CD"}, {900, "CM"}
        };
        string ans = "";

        while (num > 0) {
            int highest_num = to_string(num)[0] - '0';
            if (highest_num == 4 || highest_num == 9) {
                for (auto it = table_49.rbegin(); it != table_49.rend(); ++it) {
                    if (it->first <= num) {
                        num -= it->first;
                        ans += it->second;
                        break;
                    }
                } 
            } else {
                for (auto it = table.rbegin(); it != table.rend(); ++it) {
                    if (it->first <= num) {
                        num -= it->first;
                        ans += it->second;
                        break;
                    }
                }
            }
        }

        return ans;
    }

    // Official Solution:
    string intToRoman(int num) {
        const map<int, string> table = {
            {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, 
            {40, "XL"}, {50, "L"}, {90, "XC"}, {100, "C"},
            {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}
        };
        string ans = "";

        while (num > 0) {
            for (auto it = table.rbegin(); it != table.rend(); ++it) {
                if (it->first <= num) {
                    num -= it->first;
                    ans += it->second;
                    break;
                }
            }
        }

        return ans;
    }
};
// link: https://leetcode.cn/problems/rotate-list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    // My Solution:
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next) return head;

        int n = 0;
        ListNode *cur = head, *pre = nullptr, *end;

        while (cur) {
            pre = cur;
            cur = cur->next;
            ++n;
        }
        end = pre;

        k = (n - 1) - k % n;
        cur = head; pre = nullptr;
        while (cur && k--) {
            pre = cur;
            cur = cur->next;
        }
        end->next = head;
        head = cur->next;
        cur->next = nullptr;

        return head;
    }
};
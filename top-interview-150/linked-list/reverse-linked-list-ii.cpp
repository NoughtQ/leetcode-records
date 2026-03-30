// link: https://leetcode.cn/problems/reverse-linked-list-ii

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0, head);
        ListNode *cur = head, *pre = dummy, *next;
        ListNode *start, *end, *start_pre, *end_next;

        while (right-- && cur) {
            if (!(--left)) {
                start = cur;
                start_pre = pre;
            }
            if (!right) {
                end = cur;
                end_next = cur->next;
            }
            pre = cur;
            cur = cur->next;
        }

        cur = start; pre = nullptr;
        while (pre != end) {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        start_pre->next = pre;
        start->next = end_next;

        return dummy->next;
    }
};
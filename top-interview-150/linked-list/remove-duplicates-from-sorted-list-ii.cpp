// link: https://leetcode.cn/problems/remove-duplicates-from-sorted-list-ii

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy = new ListNode(-101, head);
        ListNode *cur = head, *pre = dummy;
        ListNode *new_head = new ListNode(0), *end = new_head;

        while (cur) {
            while (cur->next && cur->val == cur->next->val) {
                pre = cur;
                cur = cur->next;
            }
            if (pre->val != cur->val) {
                end->next = new ListNode(cur->val);
                end = end->next;
            }
            pre = cur;
            cur = cur->next;
        }

        return new_head->next;
    }
};
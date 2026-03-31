// link: https://leetcode.cn/problems/partition-list

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
    ListNode* partition(ListNode* head, int x) {
        ListNode *lt_head = new ListNode(0), *lt_cur = lt_head;
        ListNode *ge_head = new ListNode(0), *ge_cur = ge_head;
        ListNode *cur = head;

        while (cur) {
            ListNode *tmp = new ListNode(cur->val);
            if (cur->val < x) {
                lt_cur->next = tmp;
                lt_cur = lt_cur->next;
            } else {
                ge_cur->next = tmp;
                ge_cur = ge_cur->next;                
            }
            cur = cur->next;
        }
        lt_cur->next = ge_head->next;

        return lt_head->next;
    }
};
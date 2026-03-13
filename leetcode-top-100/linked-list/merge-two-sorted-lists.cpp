// link: https://leetcode.cn/problems/merge-two-sorted-lists

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
    // Method 1: Iteration
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list2 == nullptr) 
            return list1;
        if (list1 == nullptr)
            return list2;

        ListNode *p1 = list1, *p2 = list2;
        ListNode *head = new ListNode(-1);
        ListNode *cur = head;

        while (p1 != nullptr && p2 != nullptr) {
            if (p1->val < p2->val) {
                cur->next = p1;
                p1 = p1->next;
            } else {
                cur->next = p2;
                p2 = p2->next;
            }
            cur = cur->next;
        }
        cur->next = p1 == nullptr ? p2 : p1;
        return head->next;
    }

    // Method 2: Recursion
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list2 == nullptr) 
            return list1;
        if (list1 == nullptr)
            return list2;
        if (list1->val < list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};
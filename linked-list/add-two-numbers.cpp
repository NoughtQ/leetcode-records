// link: https://leetcode.cn/problems/add-two-numbers

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
    // Just Simulation
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(0), *p = dummy, *p1 = l1, *p2 = l2;
        int carry = 0;

        while (p1 != nullptr && p2 != nullptr) {
            int val = p1->val + p2->val + carry;
            ListNode *tmp = new ListNode(val);
            carry = tmp->val / 10;
            tmp->val %= 10;
            p->next = tmp;
            p = p->next;
            p1 = p1->next;
            p2 = p2->next;
        }

        while (p1 != nullptr) {
            ListNode *tmp = new ListNode(p1->val + carry);
            carry = tmp->val / 10;
            tmp->val %= 10;            
            p->next = tmp;
            p = p->next;
            p1 = p1->next;
        }
 
         while (p2 != nullptr) {
            ListNode *tmp = new ListNode(p2->val + carry);
            carry = tmp->val / 10;
            tmp->val %= 10;            
            p->next = tmp;
            p = p->next;
            p2 = p2->next;
        }

        if (carry) {
            ListNode *tmp = new ListNode(carry);
            carry = tmp->val / 10;
            tmp->val %= 10;            
            p->next = tmp;
        }

        return dummy->next;
    }
};
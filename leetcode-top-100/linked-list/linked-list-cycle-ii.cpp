// link: https://leetcode.cn/problems/linked-list-cycle-ii

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // Method: fast-slow pointers
    //             b
    //      a      ┌───*──────────┐
    // ------------│              │
    //             └──────────────┘
    //                        c
    // slow pointer: a + b
    // fast pointer: a + n * (b + c) + b
    // 2 * (a + b) == a + n * (b + c) + b => a = (n - 1)b + nc = (n - 1)(b + c) + c
    // So when the fast pointer meets the slow pointer, 
    // move the slow pointer back to the head and change the step size of the fast pointer to 1; 
    // the position where they meet again must be the starting point of the loop.
    ListNode *detectCycle(ListNode *head) {
        ListNode *fp = head, *sp = head;
        if (fp == nullptr) return fp;

        do {
            fp = fp->next;
            if (fp == nullptr) break;
            fp = fp->next;
            sp = sp->next;
        } while (fp != nullptr && fp != sp);
        
        sp = head;
        while (fp != nullptr && fp != sp) {
            fp = fp->next;
            sp = sp->next;
        }

        return fp;
    }
};
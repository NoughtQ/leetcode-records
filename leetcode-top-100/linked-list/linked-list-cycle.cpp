// link: https://leetcode.cn/problems/linked-list-cycle

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
    // Method: fast-slow pointers (same as the official solution!)
    //     If there is a loop, the fast pointer will catch up to the slow pointer at a certain node
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr)
            return false;

        ListNode *sp = head, *fp = head->next;
        while (fp->next != nullptr && fp->next->next != nullptr && fp != sp) {
            fp = fp->next->next;
            sp = sp->next;
        }

        if (fp->next == nullptr || fp->next->next == nullptr)
            return false;
        else
            return true;
    }
};
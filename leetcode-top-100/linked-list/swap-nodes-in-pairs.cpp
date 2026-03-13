// https://leetcode.cn/problems/swap-nodes-in-pairs

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
    // Iteration
    ListNode* swapPairs(ListNode* head) {
        ListNode *cur = head, *pre = nullptr, *next, *nnext;

        while (cur != nullptr) {
            if (cur->next == nullptr) break;
            next = cur->next;
            nnext = next->next;
            cur->next = nnext;
            next->next = cur;
            if (pre != nullptr) pre->next = next;
            if (cur == head) head = next;
            pre = cur;
            cur = cur->next;
        }

        return head;
    }
};
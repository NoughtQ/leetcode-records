// link: https://leetcode.cn/problems/reverse-nodes-in-k-group

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *cur = head, *pre = nullptr;

        while (cur != nullptr) {
            auto [startNode, nextStartNode] = reverseList(cur, k);
            if (pre != nullptr) {
                // cout << pre->val << endl;
                pre->next = startNode;
            } else {
                head = startNode;
            }
            pre = cur;
            cur = nextStartNode;
        }

        return head;
    }

    pair<ListNode*, ListNode*> reverseList(ListNode* head, int k) {
        ListNode *cur = head, *pre = nullptr, *next;

        while (k-- && cur != nullptr) {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }

        if (k >= 0) {
            cur = pre;
            pre = nullptr;
            while (cur != nullptr) {
                next = cur->next;
                cur->next = pre;
                pre = cur;
                cur = next;
            }
        }

        return {pre, cur};
    }
};
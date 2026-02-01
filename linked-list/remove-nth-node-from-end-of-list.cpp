// link: https://leetcode.cn/problems/remove-nth-node-from-end-of-list

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
    // Method 1: Double Traversal
    // Time Complexity: O(l)
    // Space Complexity: O(0)
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *cur = head, *pre = nullptr;
        int len = 0, cnt;

        while (cur != nullptr) {
            cur = cur->next;
            ++len;
        }

        cnt = len - n;
        cur = head;
        while (cnt--) {
            pre = cur;
            cur = cur->next;
        }

        if (cur == head) {
            return head->next;
        } else {
            pre->next = cur->next;
            return head;
        }
    }

    // Method 2: Stack (the idea came from official solution)
    // Time Complexity: O(l)
    // Space Complexity: O(l)
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *cur = head, *pre = nullptr;
        int len = 0, cnt;
        stack<ListNode*> s;

        while (cur != nullptr) {
            s.push(cur);
            cur = cur->next;
        }

        while (--n) s.pop();
        if (s.top() == head)
            return head->next;
        else {
            cur = s.top();
            s.pop();
            s.top()->next = cur->next;
            return head;
        }
    }

    // Method 3: Double Pointers (the idea came from official solution)
    // Pointer f precedes pointer s by n nodes, so when f is nullptr, 
    // the position of s is the n-th node from the end that needs to be deleted
    // Time Complexity: O(l)
    // Space Complexity: O(1)
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *s = head, *f = head, *pre = nullptr;

        while (n--) f = f->next;
        while (f != nullptr) {
            f = f->next;
            pre = s;
            s = s->next;
        }

        if (s == head) {
            return head->next;
        } else {
            pre->next = s->next;
            return head;
        }
    }
};
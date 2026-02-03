// link: https://leetcode.cn/problems/sort-list

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
    // Method 1: Use vector to store values of nodes and sort them
    // Time Complexity: O(nlogn)
    // Space Complexity: O(n)
    ListNode* sortList(ListNode* head) {
        int n = 0;
        ListNode *cur = head;
        vector<int> table;

        while (cur != nullptr) {
            table.push_back(cur->val);
            cur = cur->next;
        }

        sort(table.begin(), table.end());
        cur = head;
        while (cur != nullptr) {
            cur->val = table[n++];
            cur = cur->next;
        }

        return head;
    }

    // Method 2: Merge Sort From Top to Bottom (Official Solution 1)
    // Time Complexity: O(nlogn)
    // Space Complexity: O(logn)
    ListNode* sortList(ListNode* head) {
        return sortList(head, nullptr);
    }

    ListNode* sortList(ListNode* head, ListNode* tail) {
        ListNode *fast = head, *slow = head, *lh, *rh, *newHead;

        if (head == nullptr) return head;
        if (head->next == tail) {
            head->next = nullptr;
            return head;
        }

        while (fast != tail) {
            fast = fast->next;
            if (fast != tail) {
                slow = slow->next;
                fast = fast->next;
            }
        }

        lh = sortList(head, slow);
        rh = sortList(slow, tail);
        newHead = merge(lh, rh);

        return newHead;
    }

    ListNode* merge(ListNode* lh, ListNode* rh) {
        ListNode *dummy = new ListNode(0);
        ListNode *cur = dummy, *curL = lh, *curR = rh, *next;

        while (curL != nullptr && curR != nullptr) {
            if (curL->val <= curR->val) {
                cur->next = curL;
                curL = curL->next;
            } else {
                cur->next = curR;
                curR = curR->next;
            }
            cur = cur->next;
        }

        if (curL != nullptr) {
            cur->next = curL;
        } else if (curR != nullptr) {
            cur->next = curR;
        }

        return dummy->next;
    }

    // Method 3: Merge Sort From Bottom to Top (Official Solution 2)
    // Time Complexity: O(nlogn)
    // Space Complexity: O(1)
    ListNode* sortList(ListNode* head) {
        ListNode *dummy = new ListNode(0, head);
        ListNode *cur = head, *pre, *next, *lh, *rh, *newHead;
        int n = 0;

        if (head == nullptr) return head;

        while (cur != nullptr) {
            ++n;
            cur = cur->next;
        }

        for (int len = 1; len < n; len <<= 1) {
            cur = dummy->next;
            pre = dummy;
            while (cur != nullptr) {
                lh = cur;
                for (int i = 1; cur->next != nullptr && i < len; ++i) {
                    cur = cur->next;
                }
                rh = cur->next;
                cur->next = nullptr;
                cur = rh;
                for (int i = 1; cur != nullptr && cur->next != nullptr && i < len; ++i) {
                    cur = cur->next;
                }
                next = nullptr;
                if (cur != nullptr) {
                    next = cur->next;
                    cur->next = nullptr;
                }
                newHead = merge(lh, rh);
                pre->next = newHead;
                while (pre->next != nullptr) {
                    pre = pre->next;
                }
                cur = next;
            }     
        }

        return dummy->next;
    }

    ListNode* merge(ListNode* lh, ListNode* rh) {
        ListNode *dummy = new ListNode(0);
        ListNode *cur = dummy, *curL = lh, *curR = rh, *next;

        while (curL != nullptr && curR != nullptr) {
            if (curL->val <= curR->val) {
                cur->next = curL;
                curL = curL->next;
            } else {
                cur->next = curR;
                curR = curR->next;
            }
            cur = cur->next;
        }

        if (curL != nullptr) {
            cur->next = curL;
        } else if (curR != nullptr) {
            cur->next = curR;
        }

        return dummy->next;
    }
};
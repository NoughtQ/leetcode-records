// link: https://leetcode.cn/problems/merge-k-sorted-lists

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
    // Method 1: Sequential Merging
    // Time Complexity: O(k^2 * n)
    // Space Complexity: O(1) (without any redundant space)
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return nullptr;
        if (lists.size() == 1) return lists[0];

        ListNode *cur = lists[0];
        for (int i = 1; i < lists.size(); ++i) {
            cur = merge(cur, lists[i]);
        }
        return cur;
    }

    // Method 2: Divide-and-Conquer + Merging
    // Time Complexity: O(knlogk)
    // Space Complexity: O(logk)
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        return mergeKLists(lists, 0, lists.size() - 1);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists, int l, int r) {
        if (l > r) return nullptr;
        if (l == r) return lists[l];
        int mid = l + (r - l) / 2;
        return merge(mergeKLists(lists, l, mid), mergeKLists(lists, mid + 1, r));
    }
    
    // helper function (applicable to both methods)
    ListNode* merge(ListNode *head1, ListNode *head2) {
        ListNode *dummy = new ListNode(0);
        ListNode *cur = dummy, *cur1 = head1, *cur2 = head2;

        while (cur1 != nullptr && cur2 != nullptr) {
            if (cur1->val <= cur2->val) {
                cur->next = cur1;
                cur1 = cur1->next;
            } else {
                cur->next = cur2;
                cur2 = cur2->next;                
            }
            cur = cur->next;
        }

        while (cur1 != nullptr) {
            cur->next = cur1;
            cur1 = cur1->next;
            cur = cur->next;
        }
        while (cur2 != nullptr) {
            cur->next = cur2;
            cur2 = cur2->next;
            cur = cur->next;
        }

        return dummy->next;
    }
};
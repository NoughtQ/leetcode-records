// link: https://leetcode.cn/problems/intersection-of-two-linked-lists/

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
    // My Solution (Hash Table)
    // Time: O(m + n), Space: O(m) (m, n: length of linked list A and B respectively)
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curA = headA, *curB = headB;
        unordered_set<ListNode*> records;

        while (curA != NULL) {
            records.insert(curA);
            curA = curA->next;
        }

        while (curB != NULL) {
            if (records.find(curB) != records.end()) {
                return curB;
            }
            curB = curB->next;
        }

        return NULL;
    }

    // Official Solution (Double Pointers)
    // Time: O(m + n), Space: O(1)
    // Case 1: have intersection
    //     Let m = a + c, n = b + c, so c is the length of intersection part.
    //     A will be tranversed (a + c + b) times, and B will be tranversed (b + c + a) times.
    //     Consequently, two pointers will meet at the first intersecting node at the same time.
    // Case 2: no intersection
    //     A will be tranversed (m + n) times, and B will be tranversed (n + m) times.
    //     Because there is no intersection, both pointers will reach to NULL in the end.
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curA = headA, *curB = headB;
        
        while (1) {
            if (curA == curB) {
                return curA;
            }

            if (curA != NULL) {
                curA = curA->next;
            } else {
                curA = headB;
            }

            if (curB != NULL) {
                curB = curB->next;
            } else {
                curB = headA;
            }
        }

        return NULL;
    }
};
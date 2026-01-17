// link: https://leetcode.cn/problems/palindrome-linked-list

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
    // Method 1: save all elements into a random-access array, 
    //           then compare elements from two ends
    bool isPalindrome(ListNode* head) {
        ListNode *cur = head;
        ListNode *prev = NULL, *next = NULL;
        vector<int> arr;
        
        while (cur != NULL) {
            arr.push_back(cur->val);
            cur = cur->next;
        }

        int size = arr.size();
        for (int i = 0; i < size / 2; ++i) {
            if (arr[i] != arr[size - 1 - i]) {
                return false;
            }
        }
        return true;
    }

    // Method 2:
    //     1. Find midpoint of the list (fast pointer (2 steps a time)+ slow pointer (1 step a time))
    //     2. Reverse second half of the list (using codes of reverse_linked_list.cpp)
    //     3. traverse the list from two halfs and check the palindromicity
    //     4. recover the second half (using reverse function again)
    bool isPalindrome(ListNode* head) {
        ListNode *p1, *p2;
        bool flag = true;

        if (head->next == NULL)
            return true;

        ListNode *first_end = divide_two_halfs(head);
        ListNode *second_start = reverse_linked_list(first_end->next);

        p1 = head;
        p2 = second_start;
        while (flag && p2 != NULL) {
            if (p1->val != p2->val)
                flag = false;
            p1 = p1->next;
            p2 = p2->next;
        }

        first_end->next = reverse_linked_list(second_start);
        return flag;
    }

    ListNode* divide_two_halfs(ListNode* head) {
        ListNode *sp = head, *fp = head;
        while (fp->next != NULL && fp->next->next != NULL) {
            fp = fp->next->next;
            sp = sp->next;
        }
        return sp;
    }

    ListNode* reverse_linked_list(ListNode* head) {
        ListNode *cur = head, *prev = NULL, *next;
        while (cur != NULL) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};
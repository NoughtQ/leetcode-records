// link: https://leetcode.cn/problems/copy-list-with-random-pointer

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    // Method 1: Iteration + Hash Table
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    Node* copyRandomList(Node* head) {
        Node *cur = head, *newHead = nullptr, *tmp;
        vector<Node*> table;
        unordered_map<Node*, int> mp;
        int cnt = 0;

        while (cur != nullptr) {
            tmp = new Node(cur->val);
            table.push_back(tmp);
            mp[cur] = cnt++;
            if (cur == head) newHead = tmp;
            cur = cur->next;
        }

        cur = head;
        for (int i = 0; i < table.size(); ++i) {
            table[i]->next = (i != table.size() - 1) ? table[i + 1] : nullptr;
            table[i]->random = (cur->random != nullptr) ? table[mp[cur->random]] : nullptr;
            cur = cur->next;
        }

        return newHead;
    }

    // Method 2: Insert copy node just next to the original node
    // like A -> A' -> B -> B' -> C -> C', where node X' is the deep copy of X
    // don't forget to recover the original list in the end!
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    Node* copyRandomList(Node* head) {
        Node *cur = head, *newHead, *tmp, *next;
        
        while (cur != nullptr) {
            tmp = new Node(cur->val);
            next = cur->next;
            cur->next = tmp;
            tmp->next = next;
            cur = next;
        }

        newHead = (head != nullptr) ? head->next : nullptr;
        cur = head;
        while (cur != nullptr) {
            tmp = cur->next;
            tmp->random = (cur->random != nullptr) ? cur->random->next : nullptr;
            next = tmp->next;
            cur = next;
        }

        cur = head;
        while (cur != nullptr) {
            cout << cur->val << endl;
            tmp = cur->next;
            next = tmp->next;
            cur->next = next;
            if (next != nullptr)
                tmp->next = next->next;
            cur = next;
        }

        return newHead;
    }
};
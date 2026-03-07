// link: https://leetcode.cn/problems/symmetric-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // Method: Recursion (official solution)
    // I cannot solve the problem independently QAQ
    // (I have tried using level-order traversal to solve it, 
    // but meeting with tricky null value problem)
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }

    bool check(TreeNode* p, TreeNode* q) {
        if (!p && !q) 
            return true;
        if (!p || !q)
            return false;
        return p->val == q->val && check(p->left, q->right) && check(p->right, q->left);
    }

    // Method: Iteration
    bool isSymmetric(TreeNode* root) {
        return check(root, root);
    }

    bool check(TreeNode* u, TreeNode* v) {
        queue<TreeNode*> q;
        q.push(u);
        q.push(v);
        while (!q.empty()) {
            TreeNode *a = q.front(); q.pop();
            TreeNode *b = q.front(); q.pop();
            if (!a && !b) continue;
            if (!a || !b || a->val != b->val) return false;
            q.push(a->left);
            q.push(b->right);
            q.push(a->right);
            q.push(b->left);
        }
        return true;
    }
};
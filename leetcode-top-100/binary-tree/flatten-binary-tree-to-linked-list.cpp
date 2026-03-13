// link: https://leetcode.cn/problems/flatten-binary-tree-to-linked-list

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
    // Method 1: Preorder Traversal
    // Time Complexity: O(n)
    // Space Complexity: O(h)
    void flatten(TreeNode* root) {
        preorderTraversal(root);
    }

    TreeNode* preorderTraversal(TreeNode* root) {
        if (root == nullptr || root->left == nullptr && root->right == nullptr) 
            return root;
        TreeNode* tmp = root->right;
        root->right = root->left;
        root->left = nullptr;
        TreeNode* l_res = preorderTraversal(root->right);
        if (l_res != nullptr) 
            l_res->right = tmp;
        else
            root->right = tmp;
        TreeNode* r_res = preorderTraversal(tmp);
        return (r_res != nullptr) ? r_res : l_res;
    }

    // Method 2: Finding Predecessor
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    void flatten(TreeNode* root) {
        TreeNode *cur = root, *pre, *next;

        while (cur != nullptr) {
            if (cur->left != nullptr) {
                next = cur->left;
                cur->left = nullptr;
                pre = next;
                while (pre->right != nullptr) {
                    pre = pre->right;
                }
                pre->right = cur->right;
                cur->right = next;
            }
            cur = cur->right;
        }
    }
};
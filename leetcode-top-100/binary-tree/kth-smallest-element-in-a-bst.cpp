// link: https://leetcode.cn/problems/kth-smallest-element-in-a-bst

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
    // Method: Inorder Traversal
    // Time Complexity: O(n)
    // Space Complexity: O(h)
    int kthSmallest(TreeNode* root, int k) {
        int cnt = 0;
        return inorderTraversal(root, cnt, k);
    }

    int inorderTraversal(TreeNode* root, int& cnt, int target) {
        if (root == nullptr) return -1;
        if (root->left != nullptr) {
            int l_res = inorderTraversal(root->left, cnt, target);
            if (cnt == target) return l_res;
        }
        if (++cnt == target) return root->val;
        if (root->right != nullptr) {
            int r_res = inorderTraversal(root->right, cnt, target);
            if (cnt == target) return r_res;
        }
        return -1;
    }
};
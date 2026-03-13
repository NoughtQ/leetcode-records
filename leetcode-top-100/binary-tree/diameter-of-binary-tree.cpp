// link: https://leetcode.cn/problems/diameter-of-binary-tree

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
    // My Solution:
    // (There are some unneccessary steps...)
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr)
            return 0;
        return max({
            diameterOfBinaryTree(root->left), 
            diameterOfBinaryTree(root->right),
            maxDepth(root->left) + maxDepth(root->right)
        });
    }

    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }

    // Official Solution (slightly modified):
    int ans = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return ans;
    }
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        ans = max(ans, l + r);
        return 1 + max(l, r);
    }
};
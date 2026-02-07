// link: https://leetcode.cn/problems/validate-binary-search-tree

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
    // Method 1: Recursion
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    bool isValidBST(TreeNode* root) {
        if (root == nullptr || root->left == nullptr && root->right == nullptr)
            return true;
        
        bool isLeftValid = true, isRightValid = true, isRootValid = true;
        if (root->left != nullptr) {
            isLeftValid = isValidBST(root->left);
            isRootValid = isRootValid && (rightMostNodeValue(root->left) < root->val);
        }
        if (root->right != nullptr) {
            isRightValid = isValidBST(root->right);
            isRootValid = isRootValid && (leftMostNodeValue(root->right) > root->val);
        }
        return isLeftValid && isRootValid && isRightValid;
    }

    int leftMostNodeValue(TreeNode* root) {
        TreeNode *node = root;
        while (node->left != nullptr) {
            node = node->left;
        }
        return node->val;
    }

    int rightMostNodeValue(TreeNode* root) {
        TreeNode *node = root;
        while (node->right != nullptr) {
            node = node->right;
        }
        return node->val;
    }

    // Method 2: Inorder Traversal
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<int> traversalList;

    bool isValidBST(TreeNode* root) {
        if (root == nullptr || root->left == nullptr && root->right == nullptr)
            return true;
        
        inorderTraversal(root);
        for (int i = 1; i < traversalList.size(); ++i) {
            if (traversalList[i - 1] >= traversalList[i])
                return false;
        }
        return true;
    }

    void inorderTraversal(TreeNode* root) {
        if (root == nullptr) return;
        if (root->left != nullptr) inorderTraversal(root->left);
        traversalList.push_back(root->val);
        if (root->right != nullptr) inorderTraversal(root->right);
    }
};
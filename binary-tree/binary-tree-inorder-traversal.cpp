// link: https://leetcode.cn/problems/binary-tree-inorder-traversal

class Solution {
public:
    // Method: simple recursion
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> list;
        if (root != nullptr) {
            if (root->left != nullptr) {
                vector<int> list_left = inorderTraversal(root->left);
                list.insert(list.end(), list_left.begin(), list_left.end());
            }
            list.push_back(root->val);
            if (root->right != nullptr) {
                vector<int> list_right = inorderTraversal(root->right);
                list.insert(list.end(), list_right.begin(), list_right.end());
            }
        }
        return list;
    }
};
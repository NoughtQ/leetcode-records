// link: https://leetcode.cn/problems/construct-binary-tree-from-inorder-and-postorder-traversal

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
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (inorder.empty()) return nullptr;
        
        TreeNode *root = new TreeNode(postorder.back());
        int i;
        for (i = 0; i < inorder.size() && inorder[i] != root->val; ++i);
        
        vector<int> il(inorder.begin(), inorder.begin() + i);
        vector<int> ir(inorder.begin() + i + 1, inorder.end());
        vector<int> pl(postorder.begin(), postorder.begin() + i);
        vector<int> pr(postorder.begin() + i, postorder.end() - 1);
        root->left = buildTree(il, pl);
        root->right = buildTree(ir, pr);
        return root;
    }
};
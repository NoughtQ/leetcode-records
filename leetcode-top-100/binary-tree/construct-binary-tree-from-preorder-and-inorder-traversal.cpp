// link: https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-inorder-traversal

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
    // Method: Recursion
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (!preorder.size()) return nullptr;
        
        TreeNode *root = new TreeNode(preorder[0]);
        if (preorder.size() == 1) return root;

        int i;
        for (i = 0; root->val != inorder[i] && i < inorder.size(); ++i);
        vector<int> lp(preorder.begin() + 1, preorder.begin() + i + 1);
        vector<int> rp(preorder.begin() + i + 1, preorder.end());
        vector<int> li(inorder.begin(), inorder.begin() + i);
        vector<int> ri(inorder.begin() + i + 1, inorder.end());        
        root->left = buildTree(lp, li);
        root->right = buildTree(rp, ri);
        
        return root;
    }
};
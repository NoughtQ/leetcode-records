// link: https://leetcode.cn/problems/binary-tree-level-order-traversal

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
    // Solution: BFS (use queue)
    // Time & Space Complexity: O(n)
    queue<pair<TreeNode*, int>> q;
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> tmp;
        int cnt = 0;

        if (root == nullptr) return ans;
        
        q.push({root, 0});
        while (!q.empty()) {
            auto [node, level] = q.front();
            q.pop();
            if (level > 0 && cnt < level) {
                ans.push_back(tmp);
                tmp.clear();
                ++cnt;
            }
            tmp.push_back(node->val);
            if (node->left != nullptr) q.push({node->left, level + 1});
            if (node->right != nullptr) q.push({node->right, level + 1});
        }
        
        if (!tmp.empty()) ans.push_back(tmp);

        return ans;
    }
};
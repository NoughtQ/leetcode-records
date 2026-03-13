// link: https://leetcode.cn/problems/binary-tree-right-side-view

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
    // Method: Layered Traversal (BFS)
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> levels;
        vector<int> tmp, ans;
        queue<pair<TreeNode*, int>> q;
        int cnt = 0;
        
        if (root == nullptr) return ans;

        q.push({root, 0});
        while (!q.empty()) {
            auto [node, level] = q.front();
            q.pop();
            if (level > 0 && level > cnt) {
                ++cnt;
                levels.push_back(tmp);
                tmp.clear();
            }
            tmp.push_back(node->val);
            if (node->left != nullptr) q.push({node->left, level + 1});
            if (node->right != nullptr) q.push({node->right, level + 1});
        }

        if (!tmp.empty()) levels.push_back(tmp);

        for (auto level : levels) {
            ans.push_back(level.back());
        }

        return ans;
    }

    // Method 2: DFS
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<int> ans;

    vector<int> rightSideView(TreeNode* root) {
        if (root == nullptr) return ans;
        dfs(root, 0);
        return ans;
    }

    void dfs(TreeNode* root, int h) {
        if (root == nullptr) return;
        if (h == ans.size()) ans.push_back(root->val);
        dfs(root->right, h + 1);
        dfs(root->left, h + 1);
    }
};
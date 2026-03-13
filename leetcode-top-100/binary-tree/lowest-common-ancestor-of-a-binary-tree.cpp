// link: https://leetcode.cn/problems/lowest-common-ancestor-of-a-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    // Method 1: DFS + Hash Table
    // Time Complexity: O(n)
    // Space Complexity: O(n)

    unordered_map<TreeNode*, TreeNode*> r;

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        dfs(root, nullptr);
        unordered_set<TreeNode*> p_pre;
        TreeNode *cur;

        cur = p;
        while (r[cur] != cur) {
            p_pre.insert(cur);
            cur = r[cur];
        }
        p_pre.insert(root);

        cur = q;
        while (r[cur] != cur) {
            if (p_pre.contains(cur)) return cur;
            cur = r[cur];
        }

        return root;
    }

    void dfs(TreeNode* root, TreeNode* pre) {
        if (!root) return;
        if (pre == nullptr) {
            r[root] = root;
        } else {
            r[root] = pre;
        }
        dfs(root->left, root);
        dfs(root->right, root);
    }

    // Method 2: Simple Recursion (by 灵茶山艾府)
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || root == p || root == q) return root;
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        if (left && right) return root;
        return left ? left : right;
    }
};
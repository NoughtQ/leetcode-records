// link: https://leetcode.cn/problems/path-sum-iii

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
    // Method 1: DFS
    // Time Complexity: O(n^2)
    // Space Complexity: O(n)
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return 0;
        return pathSum(root, targetSum, false);
    }

    int pathSum(TreeNode* root, long long targetSum, bool isContinuous) {
        if (root == nullptr) return 0;

        int l_count = 0, r_count = 0, m_count = 0;
        if (targetSum == root->val) ++m_count;
        if (!isContinuous) {
            l_count = pathSum(root->left, targetSum, false);
            r_count = pathSum(root->right, targetSum, false);
        }
        m_count += pathSum(root->left, targetSum - root->val, true) 
                + pathSum(root->right, targetSum - root->val, true);
        return l_count + r_count + m_count;
    }

    // Method 2: Prefix Sum
    // Time Complexity: O(n^2)
    // Space Complexity: O(n)
    unordered_map<long long, int> prefix;

    int pathSum(TreeNode* root, int targetSum) {
        prefix[0] = 1;
        return dfs(root, 0, targetSum);
    }

    int dfs(TreeNode *root, long long ps, int targetSum) {
        if (!root) return 0;

        int cnt = 0;
        ps += root->val;

        if (prefix.contains(ps - targetSum)) 
            cnt = prefix[ps - targetSum];

        ++prefix[ps];
        cnt += dfs(root->left, ps, targetSum);
        cnt += dfs(root->right, ps, targetSum);
        --prefix[ps];

        return cnt;
    }
};
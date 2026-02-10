// link: https://leetcode.cn/problems/binary-tree-maximum-path-sum

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
    // Method: Recursion (by Official Solution)
    // Calculate maximum gain of each node, which is equal to the value of current node
    // plus maximum gain in the left or right subtrees (since the path can only go in one way).
    // If both left and right subtress provide negative gains, then ignore them (set to zero).
    // Time Complexity: O(n)
    // Space Complexity: O(n)

    int maxSum = INT_MIN;

    int maxPathSum(TreeNode* root) {
        maxGain(root);
        return maxSum;
    }

    int maxGain(TreeNode* root) {
        if (!root) return 0;
        
        int sum = root->val;
        int lsum = max(0, maxGain(root->left));
        int rsum = max(0, maxGain(root->right));
        sum += lsum + rsum;

        maxSum = max(maxSum, sum);

        return root->val + max(lsum, rsum);
    }
};
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
    bool found;
    bool isLeaf(TreeNode* root){
        return (!root->left && !root->right);
    }
    void dfs(TreeNode* root, int targetSum, int currentSum){
        if(!root || found) return;
        if(isLeaf(root) && currentSum == targetSum){
            found = true; return;
        }
        if(root->left) dfs(root->left, targetSum, currentSum + root->left->val);
        if(root->right) dfs(root->right, targetSum, currentSum + root->right->val);
    }
public:
    bool hasPathSum(TreeNode* root, int t) {
        if(!root) return false;
        dfs(root, t, root->val);
        return found;
    }
};
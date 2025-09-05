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
    int targetSum, target;
    bool found;
    bool isLeaf(TreeNode* root){
        return (!root->left && !root->right);
    }
    void dfs(TreeNode* root, int sum){
        if (!root || found) return;

        if (isLeaf(root) && sum == targetSum) {
            found = true;
            return;
        }
        
        cout << root->val << "  " << sum <<endl;
        if(root->left)
            dfs(root->left, sum + root->left->val);
        if(root->right)
            dfs(root->right, sum + root->right->val);
    }
public:
    bool hasPathSum(TreeNode* root, int t) {
        if(!root) return false;
        targetSum = t;
        dfs(root, root->val);
        return found;
    }
};
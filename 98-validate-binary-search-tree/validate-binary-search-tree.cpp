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
    bool checkBST(TreeNode* root, long long lower_bound, long long upper_bound){
        if(!root) return true;
        if(root->val <= lower_bound || root->val >= upper_bound) return false;
         return checkBST(root->left, lower_bound, root->val) &&
                checkBST(root->right, root->val, upper_bound);
    }
public:
    bool isValidBST(TreeNode* root) {
        return checkBST(root, LLONG_MIN, LLONG_MAX);
    }
};

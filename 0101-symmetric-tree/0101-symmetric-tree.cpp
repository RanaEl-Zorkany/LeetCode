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
    bool subTree(TreeNode* left_root, TreeNode* right_root){
        if(left_root == nullptr && right_root == nullptr) return true;
        if(left_root == nullptr || right_root == nullptr) return false;
        if(left_root -> val != right_root -> val) return false;
        
        return subTree(left_root -> left, right_root -> right) && subTree(left_root -> right, right_root -> left);     
    }
    bool isSymmetric(TreeNode* root) {
        if(root -> left == nullptr && root -> right == nullptr) return true;
        else if(root -> left == nullptr || root -> right == nullptr) return false;
        return subTree(root -> left, root -> right);
    }
};
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
    int cnt, result, k;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        cnt++;
        if(cnt == k){
            result = root->val; return;
        }
        inorder(root->right);
    }
    int kthSmallest(TreeNode* root, int kk) {
        k = kk;
        inorder(root);
        return result;
    }
};
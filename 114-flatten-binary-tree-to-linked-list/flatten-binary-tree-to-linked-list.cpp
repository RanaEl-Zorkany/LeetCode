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
    vector<int> data;
    void preorder(TreeNode* root){
        if(!root) return;
        data.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    void createTree(TreeNode* root){
        TreeNode* current = root;
        for (int i = 1; i < data.size(); ++i) {
            current->left = nullptr;
            current->right = new TreeNode(data[i]);
            current = current->right;
        }
    } 
    void flatten(TreeNode* root) {
        if (!root) return;
        preorder(root);
        root->val = data[0];
        createTree(root);
    }
};
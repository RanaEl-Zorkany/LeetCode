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
    vector<string> paths;
    vector<int> numerical;
    
    vector<string> binaryTreePaths(TreeNode* root) {
        if (!root) return paths;
        
        numerical.push_back(root->val);
        
        if(!root->left && !root->right){
            string path = "";
            for(int i=0; i<numerical.size(); i++){
                if(i>0)
                    path += "->";
                path += to_string(numerical[i]);
            }
            paths.push_back(path);
        }
        binaryTreePaths(root->left);
        binaryTreePaths(root->right);
        numerical.pop_back();
        return paths;
    }
};
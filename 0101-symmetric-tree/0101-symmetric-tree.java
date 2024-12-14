/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private boolean subTree(TreeNode left_root, TreeNode right_root){
        if(left_root == null && right_root == null) return true;
        if(left_root == null || right_root == null) return false;
        if(left_root.val != right_root.val) return false;
        
        return subTree(left_root.left, right_root.right) && subTree(left_root.right, right_root.left);     
    }
    public boolean isSymmetric(TreeNode root) {
        if(root.left == null && root.right == null) return true;
        else if(root.left == null || root.right == null) return false;
        return subTree(root.left, root.right);
    }
}
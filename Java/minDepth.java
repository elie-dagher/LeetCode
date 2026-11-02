/* Recursively count the levels we visit and return min val. since we want to count from root to leaf, then first check if the node is internal and only has on leaf. If it does then just return the other leafs depth. Then we check which depth is lower
 */
class Solution {
    public int minDepth(TreeNode root) {
        if (root == null) return 0;
        else if (root.right == null && root.left == null) return 1;
        
        int min = 0;
        int left = 1 + minDepth(root.left);
        int right = 1 + minDepth(root.right);
        if (root.left == null && root.right != null) return right;
        else if (root.left != null && root.right == null) return left;
        else {
            min = (left < right) ? left : right;
            return min;
        }
        
    }
}
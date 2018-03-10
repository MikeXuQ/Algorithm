/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isOK;
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        
        if (abs(getHeight(root->left) - getHeight(root->right)) > 1) {
            return false;
        } else {
            return isBalanced(root -> right) && isBalanced(root -> left);
        }
    }
    int getHeight(TreeNode* root) {
        if (root == NULL) return 0;
        if (root -> left == NULL && root -> right == NULL) {
            return 1;
        } else if (root -> left == NULL && root -> right != NULL) {
            return getHeight(root -> right) + 1;
        } else if (root -> right == NULL && root -> left != NULL) {
            return getHeight(root -> left) + 1;
        } else {
            return max(getHeight(root -> left) + 1, getHeight(root -> right) + 1);
        }
        
    }
    
};
#include <iostream>
using namespace std;


struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        return isSubTreeSymmetric(root->left, root->right);
    }
    bool isSubTreeSymmetric(TreeNode* left, TreeNode* right) {
        if (left == NULL && right == NULL) {
            return true;
        } else if (left != NULL && right != NULL) {
            if (left->val == right ->val) {
                return isSubTreeSymmetric(left->left, right->right) && isSubTreeSymmetric(right->left, left->right);
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
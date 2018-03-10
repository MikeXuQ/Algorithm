#include <iostream>




 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
    bool isFirst;
public:
    bool isValidBST(TreeNode* root) {
        int num = INT_MIN;
        isFirst = false;
        return isOk(num, root);
    }
    bool isOk(int& pre, TreeNode* p) {
        if (p == NULL)
            return true;
        if (!isOk(pre, p->left)) {
            return false;
        }
        if (!isFirst) {
            pre = p->val;
            isFirst = true;
        } else {
            if (pre >= p->val) {
                return false;
            }
            pre = p->val;
        }

        return isOk(pre, p->right);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <stack>
using namespace std;



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> res;
        if (root == NULL)
            return res;
        s.push(root);
        TreeNode* temp;
        while (!s.empty()) {
            temp = s.top();
            s.pop();
            res.push_back(temp->val);

            if (temp->right != NULL) {
                s.push(temp->right);
            }
            if (temp->left != NULL) {
                s.push(temp->left);
            }


        }
        return res;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    Solution s;
    s.preorderTraversal(NULL);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> input;
        queue<TreeNode*> output;
        vector<vector<int> > res;
        if (root == NULL)
            return res;
        vector<int> temp;
        input.push(root);
        while (!input.empty()) {
            TreeNode* front = input.front();
            input.pop();
            temp.push_back(front->val);
            if (front->left != NULL)
                output.push(front->left);
            if (front->right != NULL)
                output.push(front->right);
            if  (input.empty()) {
                res.push_back(temp);
                temp.clear();
                input.swap(output);
            }
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
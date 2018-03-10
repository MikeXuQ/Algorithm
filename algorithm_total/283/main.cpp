#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = nums.size();
        int total = 0;
        for (int i = 0; i < l; ++i) {
            if (nums[i] != 0) {
                nums[total] = nums[i];
                ++total;
            }
        }
        for (int i = total; i < l; ++i) {
            nums[i] = 0;
        }
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution s;
    vector<int> n = {0, 1, 0, 3, 12};
    s.moveZeroes(n);
    for (int i = 0; i < n.size(); ++i) {
        cout << n[i] << " ";
    }
    return 0;
}
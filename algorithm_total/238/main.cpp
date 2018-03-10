#include <iostream>
#include <vector>

using  namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> rArray(nums.size(), 1);
        int fromBegin = 1, fromLast = 1;
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            rArray[i] *= fromBegin;
            fromBegin *= nums[i];
            rArray[size - i - 1] *= fromLast;
            fromLast *= nums[size - i - 1];
        }

        return rArray;
    }
};

int main() {
    return 0;
}
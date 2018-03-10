#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size()-1, level = 0, water = 0;
        while (l < r) {
            int lower = height[height[l] < height[r] ? l++ : r--];
            level = max(level, lower);
            water += level - lower;
        }
        return water;
    }
};

int main() {
    vector<int> height = {4,2,3};
    Solution s;
    cout << s.trap(height) << endl;
    return 0;
}
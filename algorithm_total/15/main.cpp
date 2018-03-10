#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int> > res;

        bool findOne = false;
        int l = nums.size();
        for (int i = l - 1; i >= 2; --i) {
            if (i != l - 1 && nums[i] == nums[i + 1]) {
                continue;
            }
            int goal = -nums[i];
            findOne = false;
            int first = 0;
            int last = i - 1;
            int preFirst = 0;
            while (first != last) {
                if (nums[first] + nums[last] < goal) {
                    ++first;
                } else if (nums[first] + nums[last] > goal) {
                    --last;
                } else {
                    if (findOne && (preFirst == nums[first])) {
                        ++first;
                        continue;
                    }
                    vector<int> temp = {nums[first], nums[last], nums[i]};
                    res.push_back(temp);
                    preFirst = nums[first];
                    ++first;
                    findOne = true;

                }
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums = {-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6};
    Solution s;
    s.threeSum(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
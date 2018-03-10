#include <iostream>
#include <map>
#include <vector>

using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> hashmap;
        for (int i = 0; i < nums.size(); ++i) {
            if (hashmap.find(nums[i]) == hashmap.end()) {
                hashmap[nums[i]] = 1;
            } else {
                ++hashmap[nums[i]];
            }
        }
        for (auto i : hashmap) {
            if (i.second == 1)
                return i.first;

        }
    }
};

int main() {

    return 0;
}
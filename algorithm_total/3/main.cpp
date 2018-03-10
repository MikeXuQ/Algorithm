#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int first = 0, second = 0;
        int maxLength = 0;
        vector<int> everyPos(256, 0);
        int l = s.length();
        while (second != l) {
            first = max(everyPos[s[second]], first);
            maxLength = max(maxLength, second - first + 1);
            everyPos[s[second]] = second + 1;
            second++;
        }
        return maxLength;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution s;
    cout << s.lengthOfLongestSubstring("c") << endl;
    return 0;
}
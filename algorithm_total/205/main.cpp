#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> map1;
        if (s.length() != t.length())
            return false;
        map<char, bool> isUsed;
        for (int i = 0; i < s.length(); ++i) {
            if (map1.find(s[i]) == map1.end()) {
                map1[s[i]] = t[i];
                if (isUsed.find(t[i]) == isUsed.end()) {
                    isUsed[t[i]] = true;
                } else {
                    return false;
                }
            } else {
                if (map1[s[i]] != t[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    Solution s;
    cout << s.isIsomorphic("gg", "cd") << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
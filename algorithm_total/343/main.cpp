#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int integerBreak(int n) {
        if (n == 2) return 1;
        if (n == 3) return 2;
        int r = 1;
        while (n > 4) {
            r *= 3;
            n -= 3;
        }
        return n * r;
    }
};

int main() {
    int n = 10;
    Solution s;
    cout << s.integerBreak(n) << endl;
    return 0;
}
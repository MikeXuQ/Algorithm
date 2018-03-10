#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        bool isPositive = false;
        if (x >= 0) {
            isPositive = true;
        } else {
            x = -x;
        }

        int res = x % 10;
        int temp = 1;
        x = x / 10;
        while (x != 0) {
            temp = x % 10;
            //cout << "test " << res << " " <<  ((res & 0x70000000)!=0) << " " << res * 10  << endl;
            if ((res & 0x70000000) != 0)
                return 0;
            res = res * 10;
            res = res + temp;

            x = x / 10;
        }
        if ((res & 0x80000000) != 0)
            return 0;
        return isPositive ? res : -res;
    }
};


int main() {

    Solution s;
    cout << hex << -2147483412 << " " << 2143847412 << endl;
    std::cout << s.reverse(1563847412) << " " << INT_MAX << std::endl;
    return 0;
}
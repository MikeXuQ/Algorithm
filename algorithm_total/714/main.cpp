#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int l = prices.size();
        if (l == 0) return 0;
        int maxx = prices[l - 1];
        int minn = prices[l - 1];
        int sum = 0;
        bool isUsed = false;
        for (int i = l - 2; i >= 0; --i) {
            if (prices[i] > minn + fee || prices[i] > maxx) {
                if (maxx - minn - fee > 0) {
                    sum += maxx - minn - fee;
                    isUsed = true;
                }
                maxx = prices[i];
                minn = prices[i];
                isUsed = false;
            } else {
                minn = min(minn, prices[i]);
            }
        }
        if (!isUsed && maxx - minn - fee > 0) {
            sum += maxx - minn - fee;
        }
        return sum;
    }
};

int main() {
    Solution s;
    int fee = 2;
    vector<int> p = {1, 3, 2, 5, 8, 4, 9};
    cout << s.maxProfit(p, fee) << endl;
    return 0;
}
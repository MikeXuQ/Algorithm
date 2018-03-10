#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxx = 0;
        int sum = 0;
        for (int i = prices.size() - 1; i >= 0; --i) {
            maxx = max(maxx, prices[i]);
            sum += (maxx - prices[i]);
            maxx = prices[i];
        }
        return sum;
    }
};

int main() {
    vector<int> r = {6,7,8,5,2,4,3};
    Solution s;
    cout << s.maxProfit(r) << endl;
    return 0;
}
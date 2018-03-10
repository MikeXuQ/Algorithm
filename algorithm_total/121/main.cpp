#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0)
            return 0;
        int minn = prices[0];
        int maxprofit = 0;
        for (int i = 0; i < prices.size(); ++i) {
            minn = min(prices[i], minn);
            maxprofit = max((prices[i] - minn), maxprofit);
        }
        return maxprofit;
    }
};

int main() {
    Solution s;
    vector<int> stock = {7, 1, 5, 3, 6, 4};
    cout << s.maxProfit(stock) << endl;
    return 0;
}
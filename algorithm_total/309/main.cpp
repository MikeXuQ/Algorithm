#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = INT_MIN, sell = 0, curMax = 0;
        for (int i = 0; i < n; ++i) {

            int t = max(curMax - prices[i], buy);
            int t2 = max(buy + prices[i], sell);
            curMax = max(curMax, sell);
            sell = t2;
            buy = t;
        }


        return max(curMax, sell);
    }
};


int main() {
    Solution s;
    vector<int> prices = {1,2, 0, 2};
    std::cout << s.maxProfit(prices) << std::endl;
    return 0;
}
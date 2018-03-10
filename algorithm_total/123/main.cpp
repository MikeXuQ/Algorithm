#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>  dp(4, 0);
        dp[0] = INT_MIN;
        dp[2] = INT_MIN;

        for (int i = 0; i < prices.size(); ++i) {
            dp[0] = max(-prices[i], dp[0]);
            dp[1] = max(dp[1], dp[0] + prices[i]);
            dp[2] = max(dp[2], dp[1] - prices[i]);
            dp[3] = max(dp[3], dp[2] + prices[i]);
        }

        return dp[0][3];
    }
};

int main() {
    vector<int> p({6,1,3,2,4,7});
    Solution s;
    std::cout << s.maxProfit(p) << std::endl;
    return 0;
}
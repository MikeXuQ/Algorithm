# include <iostream>
# include <vector>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 0; i < coins.size(); ++i) {
            for (int j = 1; j <= amount; ++j) {
                if (j - coins[i] >= 0) {
                    if (dp[j - coins[i]] != INT_MAX) {
                        dp[j] = min(dp[j], dp[j - coins[i]] + 1);
                        cout << dp[j] << endl;
                    }
                    
                }
            }
        }
        if (dp[amount] == INT_MAX) {
            return -1;
        }
        return dp[amount];
    }
};

int main() {
    vector<int> coins = {1};
    Solution s;
    cout << s.coinChange(coins, 2) << endl;
}
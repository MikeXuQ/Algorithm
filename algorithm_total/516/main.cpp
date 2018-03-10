
#include <iostream>
#include <Algorithm>
#include <vector>

using namespace std;

class Solution {
public:

    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int> > dp(n, vector<int>(n, 0));
        for (int i  = 0; i < n; ++i) {
            dp[i][i] = 1;
        }
        int l = 1;
        while (l < n) {
            for (int i  = 0; i + l < n; ++i) {
                if (s[i] == s[i+l]) {
                    dp[i][i + l] = max(dp[i+1][i+l-1] + 2, dp[i][i+l]);
                } else {
                    dp[i][i+l] = max(dp[i][i+l-1], dp[i+1][i+l]);
                }
            }
            ++l;
        }

    return dp[0][l-1];

    }
};

int main() {
    Solution s;
    std::cout << s.longestPalindromeSubseq("aabc") << std::endl;
    return 0;
}
# include <iostream>
# include <vector>
# include <string>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int l = s.length();
        int total = l;
        vector<vector<int> > dp(l, vector<int>(l, 0));
        for (int i = 0; i < l; ++i) {
            dp[i][i] = 1;
        }
        int n = 1;
        while (n < l) {
            for (int i = 0; i < l - n; ++i) {
                if (n == 1) {
                    if (s[i] == s[i + n]) {
                        dp[i][i+n] = 1;
                        ++total;
                    }
                } else {
                    if (s[i] == s[i + n] && dp[i+1][i+n-1] == 1) {
                        dp[i][i+n] = 1;
                        ++total;
                    }
                }
                
            }
            ++n;
        }
        return total;
    }
};

int main() {
    Solution s;
    string r = "aaaaa";
    cout << s.countSubstrings(r) << endl;
}
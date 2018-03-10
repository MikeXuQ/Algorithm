class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int l = nums.size();

        vector<vector<int> > dp(l, vector<int>(l, 0));
        int n = 1;
        for (int i = 0; i < l; ++i) {
            dp[i][i] = nums[i];
            if (dp[i][i] >= s) return 1;
        }
        while (n < l) {
            for (int i = 0; i < l - n; ++i) {
                dp[i][i + n] = dp[i][i + n - 1] + nums[i + n];
                if (dp[i][i + n] >= s) return n + 1;
            }
            ++n;
        }
        return 0;
    }
};
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum = 0;
        for (int i : nums) {
            sum += i;
        }
        int target = sum - S;
        if (target < 0 || target % 2 == 1)
            return 0;
        target /= 2;
        vector<int> total(target + 1, 0);
        total[0] = 1;
        for (int i : nums) {
            for (int t = target; t >= 0; --t) {
                if (t >= i) {
                    total[t] += total[t-i];
                }
            }
        }
        return total[target];
    }
    
};
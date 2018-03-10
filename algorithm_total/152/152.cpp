class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size();
        int maxx = nums[0];
        int minn = nums[0];
        int r = maxx;
        if (size <= 0) return 0;
        vector<int> dp(size, 0);
        dp[0] = maxx;
        for (int i = 1; i < size; ++i) {
            if (nums[i] < 0)
                swap(maxx, minn);
            maxx = max(maxx * nums[i], nums[i]);
            minn = min(minn * nums[i], nums[i]);
            r = max(maxx, r);
        }
        return r;
        
    }
};
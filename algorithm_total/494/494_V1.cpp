class Solution {
public:
    int target = 0;
    void DFS(vector<int>& nums, int sum, int i, int size, int goal) {
        if (i < size) {
            DFS(nums, sum + nums[i], i + 1, size, goal);
            DFS(nums, sum - nums[i], i + 1, size, goal);
        } else {
            if (sum == goal) {
                ++target;
            }
        }
    }
    int findTargetSumWays(vector<int>& nums, int S) {
        DFS(nums, 0, 0, nums.size(), S);
        return target;
    }
};
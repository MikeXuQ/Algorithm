class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = 0, total = 0, max = 0;
        map<int, int> hash;
        for (auto num : nums) {
            sum += num;
            if (num > max) max = num;
        }
        int target = sum / k;
        if (max > target) return false;
        vector<int> visted(nums.size(), 0);
        return isOk(nums, visted, k, 0, target, 0, 0);
    }
    bool isOk(vector<int> nums, vector<int> visted, int k, int start, int target, int sum, int numbers) {
        if (sum > target) return false;
        if (k == 0 && nums.size() == numbers) {
            return true;
        }
        if (target == sum) {
            return isOk(nums, visted, k - 1, 0, target, 0, numbers);
        }
        for (int i = start; i < nums.size(); ++i) {
            if (!visted[i]) {
                visted[i] = 1;
                if (isOk(nums, visted, k, i, target, sum + nums[i], 1 + numbers))
                    return true;
                visted[i] = 0;
            }
        }
        return false;
    }



};


void findSubset(vector<int> nums, vector<int> visted, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        if (!visted[i]) {
            visted[i] = 1;
            findSubset(nums, visted, target - nums[i]);
            visted[i] = 0;
        }
    }
}
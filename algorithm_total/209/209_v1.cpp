class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int l = nums.size();
        int head = 0;
        int tail = l - 1;
        int sum = 0;
        for (int i = 0; i < l; ++i) {
            sum += nums[i];
        }
        if (sum < s) return 0;
        while (1) {
            if (nums[head] < nums[tail]) {
                if (sum - nums[head] >= s) {
                    sum -= nums[head];
                    ++head;
                } else {
                    return tail - head + 1;
                }
            } else {
                if (sum - nums[tail] >= s) {
                    sum -= nums[tail];
                    --tail;
                } else {
                    return tail - head + 1;
                }
                
            } 
        }
        return 0;
    }
};
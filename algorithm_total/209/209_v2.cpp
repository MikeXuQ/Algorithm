class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int j = 0, i = 0;
        int l = nums.size();
        int sum = 0;
        int min = l + 1;
        while (j < l) {
            while (sum < s) {
                if (j == l)  {
                    if (min == l + 1) {
                        return 0;
                    } else {
                        return min;
                    }
                }
                sum += nums[j];
                ++j;
            }
            while (i <= j && sum >= s) {
                sum -= nums[i];
                ++i;
            }
            min = (j - i + 1) < min ? j - i + 1 : min;

        }
        
        return min % (l+1);
    }
};
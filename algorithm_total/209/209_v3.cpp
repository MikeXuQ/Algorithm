class Solution {
public:
    int min;
    int minSubArrayLen(int s, vector<int>& nums) {
        int len = nums.size();
        min = len + 1;
        division(0, len, nums, s);
        return min;
    }
    int division(int l, int r, vector<int>& num, int s) {
        if (l == r - 1) return num[l];
        int mid = (l + r) / 2;
        int sum = division(l, mid, num, s) + division(mid, r, num, s);
        int 
        while (sum >= s) {

        }
        return sum;
    }
};
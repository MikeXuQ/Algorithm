class Solution {
public:
    static bool compare(vector<int> a, vector<int> b) {
        return a[0] < b[0];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int maxi = 1;
        int size = pairs.size();
        sort(pairs.begin(), pairs.end(), compare);
        vector<int> dp(size, 1);
        int end = pairs[0][1];
        for (int i = 1; i < size; ++i) {
            if (pairs[i][0] > end) {
                ++maxi;
                end = pairs[i][1];
            } else if (pairs[i][1] < end) {
                end = pairs[i][1];
            }
        }
        return maxi;
    }
};
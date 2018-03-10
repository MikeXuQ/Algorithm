class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int m = dungeon.size();
        int n = dungeon[0].size();
        vector<vector<int> > cost(m + 1, vector<int>(n + 1, INT_MAX));
        cost[m][n-1] = 1;
        cost[m-1][n] = 1;

        for (int i = m - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                cost[i][j] = min(cost[i][j+1], cost[i+1][j]) - dungeon[i][j];
                cost[i][j] = cost[i][j] <= 0 ? 1 : cost[i][j];
            }
        }
        return cost[0][0];
    }
};
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minSum(vector<int>& A) {
        if (A.size() < 2) {
            return A[0] < A[1] ? A[0] : A[1];
        }
        int n = A.size();
        vector<int> no(n, 0);

        vector<int> buy(n,0);
        buy[0] = A[0];
        for (int i = 1; i < n; ++i) {
            no[i] = buy[i-1];
            buy[i] = A[i] + min(buy[i-1], no[i-1]);
        }
        return min(no[n-1], buy[n-1]);
    }
};
int main() {
    Solution s;
    vector<int> A({1,2,5,7});
    std::cout <<s.minSum(A) << std::endl;
    return 0;
}
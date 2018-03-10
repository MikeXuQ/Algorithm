# include <vector>
# include <iostream>
using namespace std;
class Solution {
public:
    Solution() {}
    ~Solution() {}
    int findLength(vector<int>& A, vector<int>& B) {
        int max = 0;
        int count = 0;
        int j = 0;
        int lengthA = A.size();
        int lengthB = B.size();
        for (int i = 0; i < lengthA; ++i) {
            count = 0;
            j = 0;
            if (lengthA - i <= max) break;
            while (j != lengthB) {
                if (i + count < lengthA && A[i + count] == B[j]) {
                    ++count;
                    ++j;
                } else {
                    if (max < count) {
                        max = count;
                    }
                    count = 0;
                    ++j;
                }
            }
        }
        return max;
    }

    int findL(vector<int>& A, vector<int>& B) {
        int max = 0;
        int la = A.size();
        int lb = B.size();
        vector<vector<int> > dp( la + 1, vector<int>( lb + 1, 0 ) );
        
        for (int i = 1; i <= la; ++i) {
            for (int j = 1; j <= lb; ++j) {
                if (A[i - 1] == B[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    max = dp[i][j] > max ? dp[i][j] : max;
                }
            }
        }
        return max;

    }
};

int main() {

    vector<int> A = {1,1,1,1,1,1};
    vector<int> B = {1,1,1,1,1,1};
    Solution s;
    cout << s.findLength(A, B) << endl;
    cout << s.findL(A, B) << endl;

}
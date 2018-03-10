# include <iostream>
# include <vector>
using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
       int sum = 0, temp = 0;
       int size = A.size();
       for (int i = 0; i < size; ++i) {
           sum += A[i];
           temp += i * A[i];
        }
        int max = temp;
        for (int i = 1; i < size; ++i) {
            int pos = size - i;
            temp = sum + temp - size  * A[pos];
            max = max > temp ? max : temp;
        }
        return max;
    }
};

int main() {
    vector<int> A({4,3,2,6});
    Solution s;
    cout << s.maxRotateFunction(A) << endl;
}
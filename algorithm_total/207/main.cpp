#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<int> total(numCourses, 0);
        vector<bool> isVisited(prerequisites.size(), false);
        for (int i = 0; i < prerequisites.size(); ++i) {
            total[prerequisites[i].second]++;
        }
        int n = numCourses;
        for (int i = 0; i < n; ++i) {
            if (total[i] == 0)
                --numCourses;
        }
        int pre = -1;

        while (pre != numCourses) {
            pre = numCourses;
            for (int i = 0; i < prerequisites.size(); ++i) {
                if (isVisited[i] == false && total[prerequisites[i].first] == 0) {
                    total[prerequisites[i].second]--;
                    if (total[prerequisites[i].second] == 0)
                        --numCourses;
                    isVisited[i] = true;
                }
            }
        }

        return numCourses == 0;
    }
};

int main() {
    Solution s;
    int n = 3;
    pair<int, int>* r = new pair<int, int> (1,0);
    vector<pair<int, int>> p = {*r};
    cout << s.canFinish(n, p) << endl;
    return 0;
}
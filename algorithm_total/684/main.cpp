#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.back().back();
        height.resize(n, 1);
        node.resize(n);
        for (int i = 0; i < n; ++i) {
            node[i] = i;
        }
        for (int i = 0; i < edges.size(); ++i) {
            int fir = edges[i][0], sec = edges[i][1];
            if (unio(fir, sec)) {
                return vector<int> (fir, sec);
            }
        }
        return vector<int>(0, 1);
    }

private:
    vector<int> node;
    vector<int> height;
    int findRoot(int i) {
        while (i != node[i]) {
            node[i] = node[node[i]];
            i = node[i];
        }

        return i;
    }
    bool unio(int i, int j) {
        int x = findRoot(i);
        int y = findRoot(j);
        if (x == y) {
            return true;
        } else {
            node[y] = x;
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
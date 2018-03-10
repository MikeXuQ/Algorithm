#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;
//class Solution {
//
//    class mycomparison {
//        bool reverse;
//    public:
//        mycomparison(const bool& revparam=false)
//        {reverse=revparam;}
//        bool operator() (const string& lhs, const string& rhs) const
//        {
//            if (reverse) return (lhs>rhs);
//            else return (lhs<rhs);
//        }
//    };
//public:
//    vector<string> topKFrequent(vector<string>& words, int k) {
//        map<string, int> hash;
//        for (int i = 0; i < words.size(); ++i) {
//            if (hash.find(words[i]) != hash.end()) {
//                ++hash[words[i]];
//            } else {
//                hash[words[i]] = 1;
//            }
//        }
//        map<int, priority_queue<string, vector<string>, mycomparison()>> oHash;
//        priority_queue<int> nums;
//        for (auto i : hash) {
//            if (oHash.find(i.second) != oHash.end()) {
//                oHash[i.second].push(i.first);
//            } else {
//                nums.push(i.second);
//                priority_queue<string, vector<string>, mycomparison()> now;
//
//                now.push(i.first);
//                oHash[i.second] = now;
//            }
//        }
//        vector<string> res;
//        while (k != 0) {
//            int num = nums.top();
//            nums.pop();
//            priority_queue<string, vector<string>, mycomparison()> q = oHash[num];
//            while(k != 0 && !q.empty()) {
//                --k;
//                res.push_back(q.top());
//                q.pop();
//            }
//        }
//        return res;
//    }
//};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for(auto w : words){
            freq[w]++;
        }

        auto comp = [&](const pair<string,int>& a, const pair<string,int>& b) {
            return a.second > b.second || (a.second == b.second && a.first < b.first);
        };
        typedef priority_queue< pair<string,int>, vector<pair<string,int>>, decltype(comp) > my_priority_queue_t;
        my_priority_queue_t  pq(comp);

        for(auto w : freq ){
            pq.emplace(w.first, w.second);
            if(pq.size()>k) pq.pop();
        }

        vector<string> output;
        while(!pq.empty()){
            output.insert(output.begin(), pq.top().first);
            pq.pop();
        }
        return output;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

class Solution {
public:
    static bool const compareTwoPare(const pair<int, int>& first, const pair<int, int>& second) {
        if (first.second < second.second) {
            return true;
        } else if (first.second == second.second) {
            if (first.first < second.first) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        sort(people.begin(), people.end(), compareTwoPare);
        vector<pair<int, int> > result;
        if (people.size() == 0) return result;
        result.push_back(people[0]);
        for (int i = 1; i < people.size(); ++i) {
            int count = 0;
            bool isadd = false;
            for (int j = 0; j < result.size(); ++j) {
                
                if (people[i].first <= result[j].first) {
                    if (count == people[i].second) {
                        isadd = true;
                        result.insert(result.begin() + j, 1, people[i]);
                        break;
                    }
                    ++count;                    
                }
                
            }
            if (!isadd) {
                result.push_back(people[i]);
                
            }
        }
        return result;
    }
    
};
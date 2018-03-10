class Solution {
public:
    int firstUniqChar(string s) {
        map<string, int> hashMap;
        map<string, int>::iterator it;
        
        for (int i  = 0; i < s.length(); ++i) {
            it = hashMap.find(s[0]);
            if (it != hashMap.end()) {
                hashMap[s[i]] = -1;
            } else {
                hashMap[s[i]] = i;
            }
        }
        int ans = -1;
        for (it = hashMap.begin(); it != hashMap.end(); ++it) {
            if (it -> second != -1) {
                if (ans == -1) {
                    ans = it -> second;
                } else {
                    ans = min(ans, it->second);
                }
            }
        }
        return ans;
        
    }
};
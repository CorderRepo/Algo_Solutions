#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) {
            return false;
        }

        std::unordered_map<char, int> mapOfS;
        std::unordered_map<char, int> mapOfT;

        for (char n : s) {
            mapOfS[n] = mapOfS[n] + 1;
        }

        for (char n : t) {
            mapOfT[n] = mapOfT[n] + 1;
        }

        for (const auto &pair : mapOfS) {
            if (pair.second != mapOfT[pair.first]) {
                return false;
            }
        }

        return true;
    }
};
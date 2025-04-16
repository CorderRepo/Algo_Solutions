#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) {
            return false;
        }

        std::unordered_map<char, int> mapOfS;

        for (char n : s) {
            mapOfS[n] = mapOfS[n] + 1;
        }

        for (char n : t) {
            mapOfS[n] = mapOfS[n] - 1;
            if (mapOfS[n] == 0) {
                mapOfS.erase(n);
            }
        }

        for (const auto &pair : mapOfS) {
            if (pair.second != 0) {
                return false;
            }
        }

        return true;
    }
};
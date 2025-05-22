#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> log;

        for (auto const &i : s) {
            log[i]++;
        }

        for (auto const &i : t) {
            log[i]--;

            if (log[i] == 0) {
                log.erase(i);
            }
        }

        if (log.size() == 0) {
            return true;
        }

        return false;
    }
};
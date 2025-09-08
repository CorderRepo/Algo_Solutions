#include <unordered_map>
#include <vector>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> log;

        for (const auto &i : nums) {
            log[i]++;

            if (log[i] > 1) {
                return true;
            }
        }

        return false;
    }
};
#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> dict;

        for (int i: nums) {
            if (dict[i] == 0) {
                dict[i] = 1;
            } else {
                return true;
            }
        }

        return false;
    }
};
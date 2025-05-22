#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> log;

        for (int i = 0; i < nums.size(); i++) {
            if (log[nums[i]] + 1 > 1) {
                return true;
            } else {
                log[nums[i]]++;
            }       
        }

        return false;
    }
};
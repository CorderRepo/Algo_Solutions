#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> log;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            log.insert(nums[i]);
        }

        if (n == log.size()) {
            return false;
        } 

        return true;
    }
};
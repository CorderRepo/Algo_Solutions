#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // <Desired Number, Index>
        std::unordered_map<int, int> log;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[log[nums[i]]] + nums[i] == target && i != 0) {
                return {i, log[nums[i]]};
            }

            log[target - nums[i]] = i;
        }

        return {};
    }
};
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            if (map[target - nums[i]] >= 0) {
                if ((nums[i] + nums[map[target - nums[i]]] == target) && i != 0) {
                    return {map[target - nums[i]], i};
                } else {
                    map[nums[i]] = i;
                }
            }
        }

        return {};
    }
};
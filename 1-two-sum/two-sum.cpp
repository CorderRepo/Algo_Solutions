class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> log;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] + nums[log[nums[i]]] == target && i != log[nums[i]]) {
                return {i, log[nums[i]]};
            } else {
                log[target - nums[i]] = i;
            }
        }

        return {};
    }
};
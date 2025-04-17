#include <unordered_map>

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        // Hash Map for value lookup, Keys hold the value in the array and stored value is a vector of indexes
        std::unordered_map<int, vector<int>> map;
        int answer = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (!(map[nums[i]].empty())) {
                for (const int j : map[nums[i]]) {
                    // Check if i * j is divisible by k, if so add 1 to answer
                    if ((i * j) % k == 0) {
                        answer++;
                    }
                }
                // Add current index to the index vector in the hash map for key nums[i]
                map[nums[i]].push_back(i);
            } else {
                // Add current index to the index vector in the hash map for key nums[i]
                map[nums[i]].push_back(i);
            }
        }

        return answer;
    }
};
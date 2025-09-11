class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> log;

        for (const auto &i : nums) {
            ++log[i];
        }

        std::priority_queue<pair<int, int>> heap;

        for (auto &[k, v] : log) {
            heap.push({v, k});
        }

        std::vector<int> solution;

        for (int i = 0; i < k; ++i) {
            solution.push_back((heap.top()).second);
            heap.pop();
        }

        return solution;
    }
};
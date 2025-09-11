class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> log;

        for (const auto &i : nums) {
            ++log[i];
        }

        std::vector<std::pair<int, int>> temp;

        for (auto &[f,s] : log) {
            temp.push_back({s, f});
        }

        std::sort(temp.rbegin(), temp.rend());

        std::vector<int> solution;

        for (int i = 0; i < k; ++i) {
            solution.push_back(temp[i].second);
        }

        return solution;

    }
};
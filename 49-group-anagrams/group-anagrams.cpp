#include <unordered_map>
#include <vector>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> log;
        std::vector<vector<string>> solution = {};

        for (auto &str : strs) {
            string temp = str;
            std::sort(str.begin(), str.end());
            log[str].emplace_back(std::move(temp));
        }

        for (auto [_,sub] : log) {
            solution.emplace_back(std::move(sub));
        }

        return solution;
    }
};
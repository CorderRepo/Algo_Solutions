#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapChecker;

        for (auto & str : strs) {
            string temp = str;
            sort(str.begin(),str.end());
            mapChecker[str].emplace_back(move(temp));
        }

        vector<vector<string>> solution = {};

        for (auto & [_,sub] : mapChecker) {
            solution.emplace_back(move(sub));
        }

        return solution;
    }
};
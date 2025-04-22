#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapChecker;

        for (auto & str : strs) {
            string a = str;
            sort(str.begin(), str.end());
            mapChecker[str].emplace_back(move(a));
        }

        vector<vector<string>> solution;

        for (auto & [_,as] : mapChecker) {
            solution.emplace_back(move(as));
        }

        return solution;
    }
};
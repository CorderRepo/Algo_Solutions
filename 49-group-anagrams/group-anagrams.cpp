# include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> solution = {};
        unordered_map<string, vector<string>> mapChecker;

        for (const auto &s : strs) {
            vector<int> count(26, 0);

            for (char c : s) {
                count[c - 'a']++;
            }

            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }

            mapChecker[key].push_back(s);
        }

        for (const auto& pair : mapChecker) {
            if (!(pair.second).empty()) {
                solution.push_back(pair.second);
            }
        }

        return solution;
    }
};
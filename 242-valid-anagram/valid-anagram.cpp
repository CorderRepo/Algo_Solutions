class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> log;

        if (s.size() == t.size()) {
            for (int i = 0; i < s.size(); ++i) {
                log[s.at(i)]++;
                log[t.at(i)]--;

                if (log[s.at(i)] == 0) {
                    log.erase(s.at(i));
                } 
                
                if (log[t.at(i)] == 0) {
                    log.erase(t.at(i));
                }
            }

            return log.empty();
        } else {
            return false;
        }
    }
};
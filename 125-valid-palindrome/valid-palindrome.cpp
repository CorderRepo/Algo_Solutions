class Solution {
public:
    bool isPalindrome(string s) {
        int pbin = 0;
        int pend = s.size() - 1; 

        std::transform(s.begin(), s.end(), s.begin(), [] (unsigned char c) {return std::tolower(static_cast<unsigned char>(c));});

        while (pbin < pend) {

            if (!(std::isalnum(static_cast<unsigned char>(s[pbin])))) {
                ++pbin;
                continue;
            }

            if (!(std::isalnum(static_cast<unsigned char>(s[pend])))) {
                --pend;
                continue;
            }
            
            if (s[pbin] != s[pend]) {return false;};

            ++pbin, --pend;
        }

        return true;
    }
};
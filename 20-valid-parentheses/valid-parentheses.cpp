class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stock;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stock.push(c);
            } else {
                if (!stock.empty()) {
                    if (c == ')' && stock.top() == '(') {
                        stock.pop();
                    } else if (c == ']' && stock.top() == '[') {
                        stock.pop();
                    } else if (c == '}' && stock.top() == '{') {
                        stock.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }   
            }
        }

        return stock.empty();
    }
};
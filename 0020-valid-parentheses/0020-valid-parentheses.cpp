class Solution {
public:
    bool isValid(string s) {
        stack<char> res;

        for (auto c : s) {
            if (c == '(' || c == '{' || c == '[') {
                res.push(c);
                continue;
            }

            if (res.empty())
                return false;
            if ((c == ')' && res.top() == '(') ||
                (c == ']' && res.top() == '[') ||
                (c == '}' && res.top() == '{')) {
                res.pop(); // correct pair
            }
            else{
                return false;
            }
        }
        if (res.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
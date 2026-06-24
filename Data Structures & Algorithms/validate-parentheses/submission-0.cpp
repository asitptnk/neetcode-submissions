class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> c2o = {
            {')', '('}, {']','['}, {'}','{'}
        };

        for (char c:s) {
            if (c2o.count(c)) {
                if (!stk.empty() && stk.top() == c2o[c]){
                    stk.pop();
                } else {
                    return false;
                }
            } else {
                stk.push(c);
            }
        }
        return stk.empty();   
    }
};

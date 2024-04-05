class Solution {
public:   
    void func(vector<string>& result, string current, int open, int close, int max) {
        if (current.length() == max * 2) {
            result.push_back(current);
            return;
        }
        if (open < max)
            func(result, current + "(", open + 1, close, max);
        if (close < open)
            func(result, current + ")", open, close + 1, max);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        func(result, "", 0, 0, n);
        return result;
    }
};
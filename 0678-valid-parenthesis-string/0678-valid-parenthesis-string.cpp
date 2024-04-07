class Solution {
public:
    bool checkValidString(string s) {  
         stack<int>st, stk;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
               st.push(i);
            } else if (s[i] == '*') {
                stk.push(i);
            } else { 
                if (!st.empty()) {
                  st.pop();
                } else if (!stk.empty()) {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
        
        while (!st.empty() && !stk.empty()) {
            if (st.top() > stk.top()) {
                return false; 
            }
            st.pop();
            stk.pop();
        }
        
        return st.empty();
        
    }
};
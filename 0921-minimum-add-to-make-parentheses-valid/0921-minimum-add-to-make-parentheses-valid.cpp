class Solution {
public:
    int minAddToMakeValid(string S) {
        int ans = 0, bal = 0;
        for (size_t i = 0; i < S.length(); ++i) {
            bal += S[i] == '(' ? 1 : -1;
            if (bal == -1) {
                ans++;
                bal++;
            }
        }

        return ans + bal;
    }
};
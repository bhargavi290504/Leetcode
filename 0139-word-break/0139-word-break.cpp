class Solution {
public:
    bool wordBreak(string s, vector<string>& dict) {
         if (dict.size() == 0) return false;
        
        unordered_set<string> dictSet(dict.begin(), dict.end());
    vector<bool> dp(s.size() + 1, false);
        dp[0] = true;
        
        for (int i = 1; i <= s.size(); i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (dp[j]) {
                    std::string word = s.substr(j, i - j);
                    if (dictSet.find(word) != dictSet.end()) {
                        dp[i] = true;
                        break; 
                    }
                }
            }
        }
        
        return dp[s.size()];
    }
};
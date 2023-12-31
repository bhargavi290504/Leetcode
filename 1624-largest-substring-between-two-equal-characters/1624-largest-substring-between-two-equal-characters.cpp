class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {  
         unordered_map<char, int> result;
        int ans = -1;
        
        for (int i = 0; i < s.size(); i++) {
            if (result.find(s[i]) != result.end()) {
                ans = max(ans, i - result[s[i]] - 1);
            } else {
                result[s[i]] = i;
            }
        }

        return ans;
        
    }
};
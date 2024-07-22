class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(const auto &s :strs)
        {
           array<int, 26> count = {0}; 
            for(char c:s)
            {
                count[c-'a']++;
            } 
             string key;
            for (int i : count) {
                key += to_string(i) + "#";
            }
            
            mp[key].push_back(s);
        
        } 
        vector<vector<string>>ans;
        for(const auto&kv:mp)
        {
            ans.push_back(kv.second);
        } 
        return ans;   
        // o(m*n);
    }
};
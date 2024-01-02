class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {  
         vector<int> res(nums.size() + 1);
        
        vector<vector<int>> ans;
        for (int c : nums) {
            if (res[c] >= ans.size()) {
                ans.push_back({});
            }
            
            
            ans[res[c]].push_back(c);
            res[c]++;
        }
        
        return ans;
        
    }
};
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {  
       unordered_set<int>ans (nums.begin(), nums.end());

        int cnt = 1;
        while (ans.find(cnt) != ans.end()) {
            cnt++;
        }
        
        return cnt;
        
    }
};
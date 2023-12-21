class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>result;
        for (int i = 0, j = 0; i < nums.size() && j < index.size(); i++, j++){  
           result.insert(result.begin() + index[j], nums[j]);
            
        }  
        return result;
    }
};
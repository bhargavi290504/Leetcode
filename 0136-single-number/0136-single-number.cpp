class Solution {
public:
    int singleNumber(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int ans = 0; 
        
        for (int i = 0; i < nums.size(); i++) {
            
            if (i == nums.size() - 1 || nums[i] != nums[i + 1]) {
                ans = nums[i];
                break;
            }
          
            i++;
        }
        
        return ans;
    }
};
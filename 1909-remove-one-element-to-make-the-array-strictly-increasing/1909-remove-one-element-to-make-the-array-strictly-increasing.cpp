class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {  
          int cnt = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] >= nums[i]) {
                cnt++;
                if (cnt > 1) {
                    return false;
                }
               if (i == 1 || nums[i] > nums[i - 2]) {
                    continue; 
                }
                if (i == nums.size() - 1 || nums[i + 1] > nums[i - 1]) {
                    continue;  
                }
                return false;
            }
        }

        return true;
        
    }
};
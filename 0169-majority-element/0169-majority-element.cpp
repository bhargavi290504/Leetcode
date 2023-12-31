class Solution {
public:
    int majorityElement(vector<int>& nums) {  
       int res = nums[0];
        int count = 1;

        for (int i = 1; i < nums.size(); ++i) {
            if (count == 0) {
                res = nums[i];
                count = 1;
            } else if (res == nums[i]) {
                count++;
            } else {
                count--;
            }
        }

        return res;
    }
};
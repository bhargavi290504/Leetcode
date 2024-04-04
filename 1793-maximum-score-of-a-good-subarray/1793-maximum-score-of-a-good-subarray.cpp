class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
         int i = k;
        int j = k;
        int minValue = nums[k];
        int result = nums[k];
        int n = nums.size();
        while (i >= 0 && j < n) {
            minValue = min(minValue, min(nums[i], nums[j]));
            result = max(minValue * (j - i + 1), result);
            int left = (i > 0 ? nums[i - 1] : 0);
            int right = (j < n - 1 ? nums[j + 1] : 0);
            if (left >= right) {
                i -= 1;
            }
            if (right >= left) {
                j += 1;
            }
        }
        
        return result;
    }
};
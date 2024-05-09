class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {  
        sort(nums.begin(), nums.end());

        long long fairPairCount = 0;
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            int jLower = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]) - nums.begin();
            int jUpper = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]) - nums.begin();
            fairPairCount += (jUpper - jLower);
        }

        return fairPairCount;
    }
};
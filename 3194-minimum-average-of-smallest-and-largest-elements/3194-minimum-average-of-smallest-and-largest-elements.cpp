class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(begin(nums), end(nums));
        double ans = numeric_limits<double>::max();
        for (int l = 0, r = ssize(nums) - 1; l < r; ++l, --r)
            ans = min(ans,  0.5 * (nums[l] + nums[r]));
        return ans;
    }
};
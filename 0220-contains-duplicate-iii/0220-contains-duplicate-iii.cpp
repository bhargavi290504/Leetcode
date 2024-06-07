class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        if (indexDiff < 1 || valueDiff < 0) return false;
 multiset<long long> ans;
for (int i = 0; i < nums.size(); i++) {
            if (i > indexDiff) {
                ans.erase(ans.find(nums[i - indexDiff - 1]));
            }

            auto pos = ans.lower_bound((long long)nums[i] - valueDiff);

            if (pos != ans.end() && *pos <= (long long)nums[i] + valueDiff) {
                return true;
            }

            ans.insert((long long)nums[i]);
        }

        return false;
    }
};
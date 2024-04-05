class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
         int count = 0;
    long long left = 0, right = 0, total = 0;
    for (int num : nums)
        total += num;
    for (int i = 0; i < nums.size() - 1; i++) {
        left += nums[i];
        right = total - left;
        if (left >= right)
            count++;
    }
    return count;
    }
};
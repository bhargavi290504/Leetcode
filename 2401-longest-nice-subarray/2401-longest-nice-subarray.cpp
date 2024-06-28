class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int ans = 0, j = 0, res = 0;
    for (int i = 0; i < nums.size(); ++i) {
        while ((ans & nums[i]) != 0)
           ans ^= nums[j++];
        ans |= nums[i];
        res = max(res, i - j + 1);
    }
    return res;
    }
};
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
      int n = nums.size();
        vector<int> left(n, 0);
       vector<int> right(n, 0);
        vector<int> answer;

        // Calculate the cumulative sum from the left
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] + nums[i - 1];
        }

        // Calculate the cumulative sum from the right
        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] + nums[i + 1];
        }

        // Calculate the absolute difference between left and right cumulative sums
        for (int i = 0; i < n; i++) {
            int ans = std::abs(left[i] - right[i]);
            answer.push_back(ans);
        }

        return answer;
    }
};
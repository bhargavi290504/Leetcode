class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
    if (n == 0 || k == 0) return 0;

    // If k is greater than n/2, then it's equivalent to unlimited transactions.
    if (k >= n / 2) {
        int maxProfit = 0;
        for (int i = 1; i < n; ++i) {
            if (prices[i] > prices[i - 1]) {
                maxProfit += prices[i] - prices[i - 1];
            }
        }
        return maxProfit;
    }

    std::vector<std::vector<int>> dp(k + 1, std::vector<int>(n, 0));

    for (int i = 1; i <= k; ++i) {
        int maxDiff = -prices[0];
        for (int j = 1; j < n; ++j) {
            dp[i][j] = std::max(dp[i][j - 1], prices[j] + maxDiff);
            maxDiff = std::max(maxDiff, dp[i - 1][j] - prices[j]);
        }
    }

    return dp[k][n - 1];
    }
};
class Solution {
public:
    int superEggDrop(int k, int n) {
         vector<int> dp(k + 1, 0);
        int m;
        for (m = 0; dp[k] < n; m++)
            for (int i = k; i > 0; i--)
                dp[i] += dp[i - 1] + 1;
        return m;
    }
};
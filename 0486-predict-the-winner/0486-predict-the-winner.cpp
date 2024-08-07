class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
vector<vector<int>> dp(n, vector<int>(n, 0));
for (int i=0; i<n; i++){
    dp[i][i]=nums[i];
}
for (int len=1; len<n; len++){
    for (int i=0, j=len; j<n; i++, j++){
        dp[i][j] = max(nums[j]-dp[i][j-1], nums[i] - dp[i+1][j]);
    }
}

return dp[0][n-1]>=0;      
    }
};
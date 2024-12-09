class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
    vector<int> ans(n, 0);
    vector<int> pre(n + 1, 0);
    for (int i = 1; i < n; ++i) {
       ans[i] = (nums[i] % 2 != nums[i - 1] % 2) ? 1 : 0;
        pre[i] = pre[i - 1] +ans[i];
    }
    pre[n] = pre[n - 1];  

    vector<bool> res;
    for (const auto& k : queries) {
        int fromi = k[0];
        int toi = k[1];
        if (fromi == toi) {
            res.push_back(true);
        } else {
            int cnt = pre[toi] - pre[fromi];
            res.push_back(cnt == (toi - fromi));
        }
    }
    
    return res;
    }
};
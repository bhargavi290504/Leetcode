 class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
 long long total = 0, curr = 0;
        int n = nums.size();
        for(auto i : nums)
            total += i;
        int mini = INT_MAX;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            curr += nums[i];
            int avg1 = curr / (i + 1);
            if(i == n - 1) {
                if(avg1 < mini)
                    return n - 1;
                else
                    break;
            }
            int avg2 = (total - curr) / (n - i - 1);
            if(abs(avg1 - avg2) < mini) {
                mini = abs(avg1 - avg2);
                ans = i;
            }
        }
        
        return ans;
    }
};
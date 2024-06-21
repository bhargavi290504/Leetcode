class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int intial = 0;
        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
               intial += customers[i];
            }
        }
        int cnt = 0;
        int ans = 0;
        for (int i = 0; i < minutes; i++) {
            if (grumpy[i] == 1) {
                ans += customers[i];
            }
        }
        
        cnt =ans;
        for (int i = minutes; i < n; i++) {
            if (grumpy[i] == 1) {
                ans += customers[i];
            }
            if (grumpy[i - minutes] == 1) {
                ans -= customers[i - minutes];
            }
            
            cnt = max(cnt, ans);
        }
        return intial + cnt;
    }
};
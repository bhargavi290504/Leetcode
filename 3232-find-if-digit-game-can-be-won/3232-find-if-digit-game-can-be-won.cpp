class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
         int t = accumulate(nums.begin(), nums.end(), 0);
        int single = 0;
        int doublee = 0;
    
        for (int num : nums) {
            if (num < 10) {
                single += num;
            } else if (num >= 10 && num < 100) {
                doublee += num;
            }
        }
    
        int bobs = t - single;
        int bobd = t - doublee;
    
        return single > bobs || doublee> bobd;
    }
};
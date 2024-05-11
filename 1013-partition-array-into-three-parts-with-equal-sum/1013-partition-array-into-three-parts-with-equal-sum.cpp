class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
       int target = accumulate(arr.begin(), arr.end(), 0);
        if (target % 3 != 0) return false;
        target /= 3;

        int sum = 0;
        int parts = 0;
        for (int i = 0; i < arr.size()-1 && parts != 2; i++) {
            sum += arr[i];
            if (sum == target) {
                parts++;
                sum = 0;
            }
        }
        return parts == 2;
    }
};
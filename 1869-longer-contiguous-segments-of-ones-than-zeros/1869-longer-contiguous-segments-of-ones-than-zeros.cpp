class Solution {
public:
    bool checkZeroOnes(string s) {
//        
         int max1 = 0, max0 = 0; 
    int cnt1 = 0, cnt0 = 0; 

    for (char c : s) {
        if (c == '1') {
            cnt1++;
            cnt0 = 0; // Reset the count of 0's
        } else if (c == '0') {
            cnt0++;
            cnt1 = 0; // Reset the count of 1's
        }
        max1 = std::max(max1, cnt1);
        max0 = std::max(max0, cnt0);
    }

    return max1 > max0;
    }
};
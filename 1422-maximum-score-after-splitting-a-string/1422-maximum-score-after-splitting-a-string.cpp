class Solution {
public:
    int maxScore(string s) {  
         int n=s.size();
        int maxi=0;
        
        for (int i = 1; i < n; i++) {
            int zeroToLeft = count(s.begin(), s.begin() + i, '0');
            int oneToRight = count(s.begin() + i, s.end(), '1');
            maxi = max(maxi, zeroToLeft + oneToRight);
        }

        return maxi;
        
    }
};
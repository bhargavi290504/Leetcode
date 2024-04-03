class Solution {
public:
    int countPairs(vector<int>& deliciousness) {  
        const int MOD=1e9 + 7;
        unordered_map<int, int> freq;
    int count = 0;
    for (int x : deliciousness) {
        for (int p = 1; p <= (1 << 21); p <<= 1) {
            int cnt = p - x;
            count = (count + freq[cnt]) % MOD;
        }
        freq[x]++;
    }

    return count;
    }
};
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {       
         unordered_map<int, int> cnt;
    int maxFreq = 0;
    for (int num : nums) {
      cnt[num]++;
        maxFreq = max(maxFreq, cnt[num]);
    }
    int maxFreqCount = 0;
    for (const auto& pair : cnt) {
        if (pair.second == maxFreq) {
            maxFreqCount++;
        }
    }
    return maxFreq * maxFreqCount;        
    }
};
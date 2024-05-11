class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num:nums) 
        {
            freq[num]++;
        }
        int cnt=0;
         for (auto& [num, ans] : freq) {
            if ((k > 0 && freq.find(num + k) != freq.end()) || 
                (k == 0 && ans> 1)) {
                cnt++;
            }
        }
        
        return cnt;
    }
};
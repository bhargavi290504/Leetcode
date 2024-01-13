class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {  
       int cnt = 0;
        int sum = 0;
        unordered_map<int, int> sumFreq;  
        sumFreq[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

           
            if (sumFreq.find(sum - k) != sumFreq.end()) {
                cnt += sumFreq[sum - k];
            }

            
            sumFreq[sum]++;
        }

        return cnt;
    }
};
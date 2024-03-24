class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {  
         int n = nums.size();
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    unordered_set<int> numSet;
    int duplicate_num = -1;
    
    for (int num : nums) {
        actual_sum += num;
        if (numSet.find(num) != numSet.end()) {
            duplicate_num = num;
        }
        numSet.insert(num);
    }
    
    int missing_num = expected_sum - actual_sum + duplicate_num;
    
    return {duplicate_num, missing_num};
        
    }
};
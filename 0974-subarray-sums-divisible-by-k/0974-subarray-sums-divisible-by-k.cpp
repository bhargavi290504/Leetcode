class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) { 
        unordered_map<int, int> mp;
    mp[0] = 1; 
    int cnt = 0;
    int sum = 0;

    for (int num : nums) {
        sum += num;
        int rem = ((sum % k) + k) % k; 

        if (mp.find(rem) != mp.end()) {
            cnt += mp[rem];
        }
        
        mp[rem]++;
    }

    return cnt;
    }
};
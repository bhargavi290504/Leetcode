class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long long,long long> m;
        long long ans = 0 , n = nums.size();

        for(int i = 0 ; i < n; i++){
            int val = i - nums[i];
            m[val]++;
        }

        long long t = (n*(n-1))/2 , good_pair = 0;

        for(auto x : m){
            if(x.second > 1){
                good_pair = good_pair +  (x.second*(x.second-1))/2;
            }
        }

        ans = t - good_pair;
        return ans;
    }
};
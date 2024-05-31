class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums)
        {
            mp[num]++;
            
        }   
        for(const auto &k:mp)
        {
            if(k.second==1)
            {
                return k.first;
            }
        }
        return 0;
    }
};
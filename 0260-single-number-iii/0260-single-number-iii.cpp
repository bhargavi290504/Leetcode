class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num:nums)
        {
            mp[num]++;
        } 
        vector<int>ans;
        for(const auto&k:mp)
        {
           
            if(k.second==1)
            {
                ans.push_back(k.first);
            }
        } 
        return ans;
    }
};
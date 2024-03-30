class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums) mp[i]++; 
        int k=mp.size();
        mp.clear();
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            for(int j=i;j<nums.size();j++)  
            {
                mp[nums[j]]++; 
                   if(mp.size()==k)
                   {
                       c++;
                   }
                
            }  
                   mp.clear();

            }  
                   return c;
    }
};
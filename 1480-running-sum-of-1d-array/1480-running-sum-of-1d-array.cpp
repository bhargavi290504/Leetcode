class Solution {
public:
    vector<int> runningSum(vector<int>& nums) { 
        vector<int> result; 
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=nums[i];
            result.push_back({ans});
        } 
        return result;
        
    }
};
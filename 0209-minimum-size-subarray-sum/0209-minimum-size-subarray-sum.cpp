class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
    int i=0,sum=0;
        for(int j=0;j<nums.size();j++)
        {
            sum+=nums[j];
            while( sum>=target)
            {
                ans=min(ans,j-i+1);
                sum-=nums[i];
                i++;
            }
        }  
        if(ans==INT_MAX) return 0;
    return ans;
    }
};
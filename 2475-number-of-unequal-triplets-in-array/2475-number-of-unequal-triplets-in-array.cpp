class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[i]!=nums[k]&&nums[i]!=nums[j]&& nums[j]!=nums[k]) cnt++;
                }
            }
        }  
        return cnt;
    }
};
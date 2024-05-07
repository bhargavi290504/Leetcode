class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int ans=0;int cnt=0;
        for(int i=0;i<nums.size();i++) 
        {
            if(nums[i]>0) ans++;
             if( nums[i]<0) cnt++;
        }  
        return max(ans,cnt);
    }
};
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int x=0;x<=nums.size();x++)
        {
            int cnt=0;
            for(int num:nums)
            {
                if(num>=x)
                {
                    cnt++;
                }
            } 
            if(cnt==x)
            {
                return x;
            }
        } 
        return -1;
        
    }
};
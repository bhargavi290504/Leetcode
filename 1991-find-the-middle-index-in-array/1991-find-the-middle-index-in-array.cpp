class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {   
       int total=0;
        for(int i=0;i<nums.size();i++)
        {
            total+=nums[i];
        }  
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            int r=total-l-nums[i];
            if(l==r) return i;
            else l+=nums[i];
        }
          
        return -1;
    }
};
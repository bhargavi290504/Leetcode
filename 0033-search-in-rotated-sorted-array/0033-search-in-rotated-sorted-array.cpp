class Solution {
public:
    int search(vector<int>& nums, int target) {  
        int a=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                a=i;
            }
        }  
        return a;
        
    }
};
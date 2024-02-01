class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     int a=-1; int b=-1;  
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           if(nums[i]==target)
           {
               a=i;
           }
        }  
        for(int i=n-1;i>=0;i--)
        {
             if(nums[i]==target)
           {
               b=i;
           }
        }
        return{b,a};
    }
};
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int le; int n=nums.size();
        for(int i=n-1;i>=0;i--)
        {
            le=-(nums[i]);  
        int el=nums[i];
            for(int i=0;i<n;i++)
            {
                if(le==nums[i]) 
                    return el;
            }
        } 
        return -1;
    }
};
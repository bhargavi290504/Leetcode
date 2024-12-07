class Solution {
public: 
    bool func(vector<int>&nums,int penalty,int maxOperations)
    {
        int operations=0;
        for(int balls:nums)
        {
            operations+=(balls-1)/penalty;
            if(operations>maxOperations) return false;
        } 
        return true;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
       int result=high;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(func(nums,mid,maxOperations))
            {
                result=mid;
                high=mid-1;
            } 
            else
            {
                low=mid+1;
            }
        }
        return result;
    }
};
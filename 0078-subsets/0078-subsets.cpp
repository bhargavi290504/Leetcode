class Solution {
public:  
    void recursion(vector<vector<int>>& res,vector<int>&curr,vector<int>&nums,int ind)
    {
        res.push_back(curr);
        for(int i=ind;i<nums.size();i++)
        {
            curr.push_back(nums[i]);
            recursion(res,curr,nums,i+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>curr; 
        sort(nums.begin(),nums.end());
        recursion(res,curr,nums,0);
        return res;
    }
};
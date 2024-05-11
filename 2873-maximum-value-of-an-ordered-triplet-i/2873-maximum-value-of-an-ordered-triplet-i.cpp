class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    long long r= (nums[i]-nums[j]);
                    maxi=max(maxi,(r*nums[k])); 
                }
            }
        }    
        if(maxi<0) return 0;
        return maxi;
    }
};
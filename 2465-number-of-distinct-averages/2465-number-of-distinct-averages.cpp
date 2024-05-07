class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double>res;  
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            double aver=((double) nums[i]+(double) nums[j])/2;  
            res.insert(aver);
            i++; j--; 
            
        }
       return res.size();
    }
};
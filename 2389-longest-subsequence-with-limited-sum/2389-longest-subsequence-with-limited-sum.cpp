class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
     vector<int> prefix(nums.size() + 1, 0);
    for (int i = 0; i < nums.size(); ++i) {
        prefix[i + 1] = prefix[i] + nums[i];
    }  
        vector<int>res;   
        for(int k:queries){
        int l= 0;
        int h=prefix.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2; 
            if(prefix[mid]<=k)
            {
                l=mid+1;
            } 
            else 
            {
                h=mid-1;
            }
        }  
        res.push_back(h); 
        } 
        return res;
    }
};
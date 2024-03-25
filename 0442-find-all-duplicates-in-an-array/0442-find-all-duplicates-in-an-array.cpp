class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {    
       unordered_set<int> ans;
        vector<int> dupli;
        for(auto num:nums)
        {
            if(ans.find(num)!=ans.end())
            {
                dupli.push_back(num);
            }  
            else 
            {
                ans.insert(num);
            }
        }   
        return dupli;
    }
};
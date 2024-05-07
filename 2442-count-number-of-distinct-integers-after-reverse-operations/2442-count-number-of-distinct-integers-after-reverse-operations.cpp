class Solution {
public:     
    int reverse(int x)
    {
    int ans = 0;
    while (x != 0) {
        int r = x % 10;
        ans = ans * 10 + r; 
        x = x / 10; 
    }  
         return ans;
    }
   
    int countDistinctIntegers(vector<int>& nums) {
       set<int> distinct;  
        for (int num : nums) {
            distinct.insert(num);
        }
        for (int num : nums) {
            int reversed = reverse(num);
            distinct.insert(reversed); 
        }
        return distinct.size();
    }
        
    
};
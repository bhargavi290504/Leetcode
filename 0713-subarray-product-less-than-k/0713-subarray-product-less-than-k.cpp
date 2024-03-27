class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {   
          
        if(k<=1) return 0;  
        int n = nums.size();
    int len = 0;
    for (int i = 0; i < n; i++) { 
       int s = 1; 
        for (int j = i; j < n; j++) { 
            s *= nums[j];

            if (s < k) 
            {
                len++;
            }  
            else 
            {
                break;
            }
               
        }
    }
    return len;
        
    }
};
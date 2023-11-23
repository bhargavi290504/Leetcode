class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // vector <int> result;
        // for(int i=0;i<nums.size();i++)  
        // {
        //     if (nums[i]!=val)
        //     {
        //         result.push_back(nums[i]);
        //     }
        //     }    
         int j = 0; // Pointer for the modified array

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[j++] = nums[i];
            }
        }

        // The elements after index 'j' can be ignored, as they are equal to 'val'

        return j;
       
    }
};
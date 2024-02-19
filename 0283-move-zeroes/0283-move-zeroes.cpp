class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int j=-1; 
        // int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==0) {
        //         j=i;
        //         break;
        //     }
        // }  
        // for(int i=j+1;i<n;i++) 
        // {
        //     if(nums[i]!=0) 
        //     {
        //         swap(nums[i],nums[j]); 
        //         j++;
        //     }
        // }   
         int n = nums.size();
        int left = 0; // Pointer to track the position to place the next non-zero element

        // Iterate through the array
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                // If the current element is non-zero, move it to the position indicated by 'left'
                nums[left++] = nums[i];
            }
        }

        // Fill the remaining positions with zeroes
        while (left < n) {
            nums[left++] = 0;
    }  
    }
}; 
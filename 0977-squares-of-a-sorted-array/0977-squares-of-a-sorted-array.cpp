class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {  
        
        
//     for (int i=0;i<nums.size();i++)
//     {
//         nums[i]=nums[i]*nums[i];
//     }    
//         sort(nums.begin(),nums.end());
//         return nums;
        
//     }  
           int n = nums.size();
        vector<int> result(n);

        int left = 0, right = n - 1, index = n - 1;

        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (leftSquare > rightSquare) {
                result[index--] = leftSquare;
                left++;
            } else {
                result[index--] = rightSquare;
                right--;
            }
        }

        return result;
    }
};
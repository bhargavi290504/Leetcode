class Solution {
public:
    int trap(vector<int>& A) {   
        int n=A.size();
        int left = 0, right = n-1;
        int maxLeft = 0, maxRight = 0;
        int sum = 0;
        while(left <= right) {
            if(A[left] <= A[right]) {
                if(A[left] >= maxLeft) {
                    maxLeft = A[left];
                } else {
                    sum += maxLeft - A[left];
                }
                left++;
            } else {
                if(A[right] >= maxRight) {
                    maxRight = A[right];
                } else {
                    sum += maxRight - A[right];
                }
                right--;
            } 
        }
        return sum; 
            
    }
};
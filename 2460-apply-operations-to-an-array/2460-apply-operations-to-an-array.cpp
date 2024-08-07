class Solution {
public:
    vector<int> applyOperations(vector<int>& A) {
        for (int i = 0, j = 0; i < size(A); ++i){
        if (i + 1 < size(A) and A[i] == A[i + 1]){
            A[i] *= 2;
            A[i + 1] = 0;
        }
        if (A[i]) swap(A[j++], A[i]);
    }   
    return A;
    }
};
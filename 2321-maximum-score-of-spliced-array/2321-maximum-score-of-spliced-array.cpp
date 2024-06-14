class Solution {
public: 
    int kadane(const vector<int>& A, const vector<int>& B) {
    int res = 0, cur = 0;
    for (int i = 0; i < A.size(); i++) {
        cur = max(0, cur + A[i] - B[i]);
        res = max(res, cur);
    }
    int sumB = accumulate(B.begin(), B.end(), 0);
    return res + sumB;
}

    int maximumsSplicedArray(vector<int>& A, vector<int>& B) { 
        return max(kadane(A, B), kadane(B, A));
        
    }
};
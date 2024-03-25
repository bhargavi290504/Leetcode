class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {   
        int n=arr.size();
       if (n == 1) return arr[0];
    if (arr[0] != arr[1]) return arr[0];
    if (arr[n - 1] != arr[n - 2]) return arr[n - 1];

    int low = 1, high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
            return arr[mid];
        }

        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1])
                || (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
            low = mid + 1;
        }
   
        else {
   
            high = mid - 1; 
        } 
    }
     return -1; 
    }
};   
//        left side of the lement lo vunna anni even,odd mannaer lo arrage ayyi vuntay because ofsorted array,okavela mid odd place lo vunte left half elimante chey ledante right high.
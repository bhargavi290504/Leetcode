

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        int median = findKthLargest(nums, (n + 1) / 2);
        
        int left = 0, i = 0, right = n - 1;

        while (i <= right) {
            if (nums[newIndex(i, n)] > median) {
                swap(nums[newIndex(left++, n)], nums[newIndex(i++, n)]);
            } else if (nums[newIndex(i, n)] < median) {
                swap(nums[newIndex(right--, n)], nums[newIndex(i, n)]);
            } else {
                i++;
            }
        }
    }

private:
    int newIndex(int index, int n) {
        return (1 + 2 * index) % (n | 1);
    }

    int findKthLargest(vector<int>& nums, int k) {
        int left = 0, right = nums.size() - 1;
        while (true) {
            int pos = partition(nums, left, right);
            if (pos == k - 1) {
                return nums[pos];
            }
            if (pos > k - 1) {
                right = pos - 1;
            } else {
                left = pos + 1;
            }
        }
    }

    int partition(vector<int>& nums, int left, int right) {
        int pivot = nums[right];
        int storeIndex = left;
        for (int i = left; i < right; i++) {
            if (nums[i] > pivot) {
                swap(nums[i], nums[storeIndex++]);
            }
        }
        swap(nums[storeIndex], nums[right]);
        return storeIndex;
    }
};

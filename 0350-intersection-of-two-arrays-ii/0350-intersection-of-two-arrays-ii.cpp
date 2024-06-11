class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> counts;
    std::vector<int> result;
    
    // Count the occurrences of each element in nums1
    for (int num : nums1) {
        counts[num]++;
    }
    
    // Iterate through nums2 and find the intersection
    for (int num : nums2) {
        if (counts[num] > 0) {
            result.push_back(num);
            counts[num]--;
        }
    }
    
    return result;
    }
};
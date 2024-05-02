class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
          unordered_map<int, int> mp;
   stack<int> s;
    for (int i = nums2.size() - 1; i >= 0; --i) {
        int num = nums2[i];
        while (!s.empty() && s.top() <= num) {
            s.pop();
        }

        if (s.empty()) {
            mp[num] = -1;
        } else {
           mp[num] = s.top();
        }

        s.push(num);
    }

    vector<int> result;
    for (int num : nums1) {
        result.push_back(mp[num]);
    }

    return result;
        
    }
};
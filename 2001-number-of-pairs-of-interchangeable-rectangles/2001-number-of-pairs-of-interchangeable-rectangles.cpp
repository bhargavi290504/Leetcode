class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double, int> ratio_count;
        long long interchangeable_pairs = 0;
        for (const auto& rect : rectangles) {
            double ratio = static_cast<double>(rect[0]) / rect[1];
            ratio_count[ratio]++;
        }
        for (const auto& entry : ratio_count) {
            long long count = entry.second;
            if (count > 1) {
                interchangeable_pairs += count * (count - 1) / 2;
            }
        }
        
        return interchangeable_pairs;
    }
};
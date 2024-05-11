class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result;
       sort(points.begin(), points.end());

        for (const auto& query : queries) {
            int x = query[0], y = query[1], r = query[2];
            int left = 0, right = points.size() - 1;
            int ans = 0;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (points[mid][0] < x - r)
                    left = mid + 1;
                else
                    right = mid - 1;
            }
            int leftIdx = left;

            left = 0;
            right = points.size() - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (points[mid][0] <= x + r)
                    left = mid + 1;
                else
                    right = mid - 1;
            }
            int rightIdx = right;

            for (int i = leftIdx; i <= rightIdx; ++i) {
                int dx = points[i][0] - x;
                int dy = points[i][1] - y;
                if (dx * dx + dy * dy <= r * r)
                    ans++;
            }

            result.push_back(ans);
        }

        return result;
    }
};
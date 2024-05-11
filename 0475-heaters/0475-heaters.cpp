class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        
        int minimumRadius = 0;
        int heaterPtr = 0;
        
        for (int house : houses) {
            // Move the heater pointer forward until the current heater's position is >= current house's position
            while (heaterPtr < heaters.size() - 1 && heaters[heaterPtr] < house) {
                heaterPtr++;
            }
            
            // Calculate the distance between the current house and the closest heater
            int distance = INT_MAX;
            if (heaterPtr > 0) {
                distance = min(distance, abs(heaters[heaterPtr - 1] - house));
            }
            distance = min(distance, abs(heaters[heaterPtr] - house));
            
            // Update the minimum radius
            minimumRadius = max(minimumRadius, distance);
        }
        
        return minimumRadius;
    }
};
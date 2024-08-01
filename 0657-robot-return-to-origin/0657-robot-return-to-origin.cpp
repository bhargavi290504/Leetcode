class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; 
        for (char move : moves) {
            if (move == 'U') {
                y++; // Move up
            } else if (move == 'D') {
                y--; // Move down
            } else if (move == 'L') {
                x--; 
            } else if (move == 'R') {
                x++; 
            }
        }
        return x == 0 && y == 0;
    }
};
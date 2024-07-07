class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> x(n, vector<int>(m, 0)); 
        vector<vector<int>> y(n, vector<int>(m, 0));

        x[0][0] = (grid[0][0] == 'X' ? 1 : 0);
        y[0][0] = (grid[0][0] == 'Y' ? 1 : 0);

        for (int i = 1; i < n; i++) {
            x[i][0] = x[i-1][0] + (grid[i][0] == 'X' ? 1 : 0);
            y[i][0] = y[i-1][0] + (grid[i][0] == 'Y' ? 1 : 0);
        }
        for (int j = 1; j < m; j++) {
            x[0][j] = x[0][j-1] + (grid[0][j] == 'X' ? 1 : 0);
            y[0][j] = y[0][j-1] + (grid[0][j] == 'Y' ? 1 : 0);
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                x[i][j] = x[i-1][j] + x[i][j-1] - x[i-1][j-1] + (grid[i][j] == 'X' ? 1 : 0);
                y[i][j] = y[i-1][j] + y[i][j-1] - y[i-1][j-1] + (grid[i][j] == 'Y' ? 1 : 0);
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (x[i][j] > 0 && x[i][j] == y[i][j]) {
                    count++;
                }
            }
        }

        return count;
    }
};
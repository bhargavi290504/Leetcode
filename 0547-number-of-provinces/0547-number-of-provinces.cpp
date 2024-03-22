class Solution {
public:  
    void dfs(int node, vector<vector<int>>& isConnected, vector<int>& visit) {
        visit[node] = 1;
        for (int i = 0; i < isConnected.size(); i++) {
            if (isConnected[node][i] && !visit[i]) {
                dfs(i, isConnected, visit);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
           int n = isConnected.size();
        int cnt = 0;
        vector<int> visit(n);

        for (int i = 0; i < n; i++) {
            if (!visit[i]) {
               cnt++;
                dfs(i, isConnected, visit);
            }
        }

        return cnt;
        
        
    }
};
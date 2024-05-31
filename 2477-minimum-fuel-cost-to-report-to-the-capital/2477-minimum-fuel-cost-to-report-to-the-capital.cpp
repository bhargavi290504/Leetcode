class Solution {
public:
    long long minimumFuelCost(std::vector<std::vector<int>>& roads, int seats) {
        int n = roads.size() + 1; // Since there are n - 1 roads for n cities
        std::vector<std::vector<int>> graph(n);
        
        // Build the graph from the roads data
        for (const auto& road : roads) {
            graph[road[0]].push_back(road[1]);
            graph[road[1]].push_back(road[0]);
        }

        long long totalFuel = 0;
        std::vector<bool> visited(n, false);
        
        // Perform DFS from the capital city (node 0)
        dfs(0, graph, visited, seats, totalFuel);
        
        return totalFuel;
    }

private:
    int dfs(int node, std::vector<std::vector<int>>& graph, std::vector<bool>& visited, int seats, long long& totalFuel) {
        visited[node] = true;
        int representatives = 1; // Each city has one representative

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                representatives += dfs(neighbor, graph, visited, seats, totalFuel);
            }
        }

        // If the node is not the capital, calculate fuel needed to move representatives
        if (node != 0) {
            totalFuel += std::ceil((double)representatives / seats);
        }

        return representatives;
    }
};
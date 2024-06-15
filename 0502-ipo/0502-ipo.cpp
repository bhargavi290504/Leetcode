class Solution {
public:
    int findMaximizedCapital(int k, int W, vector<int>& Profits, vector<int>&Capital) {
         // Create a vector of pairs (Profit, Capital) and sort it by Capital
    std::vector<std::pair<int, int>> projects;
    for (size_t i = 0; i < Profits.size(); ++i) {
        projects.emplace_back(Profits[i], Capital[i]);
    }
    std::sort(projects.begin(), projects.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second < b.second;
    });

    // Max heap to store available projects based on profit
    std::priority_queue<int> maxHeap;
    int i = 0;

    // Iterate k times or until there are no more available projects
    for (int _ = 0; _ < k; ++_) {
        // Push all projects that can be started with the current capital
        while (i < projects.size() && projects[i].second <= W) {
            maxHeap.push(projects[i].first);
            ++i;
        }

        // If there are available projects, do the one with the maximum profit
        if (!maxHeap.empty()) {
            W += maxHeap.top();
            maxHeap.pop();
        } else {
            // No more projects can be started
            break;
        }
    }

    return W;
    }
};
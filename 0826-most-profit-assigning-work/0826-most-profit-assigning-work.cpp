class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> jobs;
        for (size_t i = 0; i < difficulty.size(); ++i) {
            jobs.push_back({difficulty[i], profit[i]});
        } 
        sort(jobs.begin(), jobs.end());
        sort(worker.begin(), worker.end());
int ans = 0;
        vector<int> res (jobs.size());
        for (size_t i = 0; i < jobs.size(); ++i) {
            ans= std::max(ans, jobs[i].second);
           res[i] = ans;
        }

        int cnt = 0;
        size_t answ = 0;
        for (int k : worker) {
            while (answ < jobs.size() && jobs[answ].first <= k) {
                answ++;
            }

            if (answ > 0) {
               cnt += res[answ - 1];
            }
        }

        return cnt;
    }
};
class Solution {
public:
    int findMinimumTime(vector<vector<int>>& tasks) {
         int res = 0;
    int range[2001] = {0};
    sort(tasks.begin(), tasks.end(), [](auto& a, auto& b){return a[1] < b[1];});
    for (auto& t : tasks){
        int start = t[0], end = t[1], d = t[2];
        for (int i = start; i <= end; i++){
            if (range[i]){
                d--;
            }
            if (d == 0){
                break;
            }
        }
        while (d){ 
            if (range[end] == 0){
                range[end]++;
                d--;
                res++;
            }
            end--;
        }
    }
    return res;
    }
};
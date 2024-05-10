class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int ans=0;
        int res=0;int cnt=0;
        while(ans<players.size()&&res<trainers.size())
        {
            if(players[ans]<=trainers[res]) 
            {
                cnt++;
                ans++;
                res++;
            } 
            else res++;
        } 
        return cnt;
    }
};
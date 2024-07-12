class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp; 
        for(auto i:tasks)
        {
            mp[i]++;
        } 
        int cnt=0;
        for(const auto &k:mp)
        {
            if(k.second==1) return -1;
            else if(k.second%3==0)
            {
                cnt +=k.second/3;
            }
            else 
            {
                cnt+=k.second/3+1;
            }
        }
        return cnt;
    }
};
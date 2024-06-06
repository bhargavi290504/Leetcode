class Solution {
public:
    int takeCharacters(string s, int k) {
       int n = s.length();
        unordered_map<char,int> count;
        for(auto &ch : s)
           count[ch]++;
        if(count['a'] < k || count['b'] < k || count['c'] < k) return -1;
        int i = n-1,j = n-1;
        int minTimeReq = INT_MAX;
        while(i >= 0)
        {
            count[s[i]]--;
            while(count[s[i]] < k)
              count[s[j]]++,j--;
            i--; 
            minTimeReq = min(minTimeReq,i+n-j);
        }
        return minTimeReq;
    }
};
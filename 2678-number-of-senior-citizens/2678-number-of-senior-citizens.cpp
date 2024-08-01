class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(const auto &k:details)
        {
            int ten=k[11]-'0';
            int one=k[12]-'0';
             int ans=ten*10+one;
            if(ans>60)cnt++;
        } 
        return cnt;
    }
};
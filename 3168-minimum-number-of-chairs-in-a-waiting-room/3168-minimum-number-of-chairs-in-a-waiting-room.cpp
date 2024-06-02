class Solution {
public:
    int minimumChairs(string s) {
        int cnt=0; 
        int freq=INT_MIN;
        for(char c: s)
        {
            if(c=='E')
            {
                cnt++; 
                freq=max(freq,cnt);
            } 
            else if (c=='L')
            {
                cnt--;
            }
        } 
        return freq;
    }
};
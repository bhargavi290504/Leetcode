class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {  
        sort (g.begin(),g.end());
         sort (s.begin(),s.end());  
        int cnt=0;
         int rnt=0; 
        while (cnt<g.size()&&rnt<s.size())
        {
            if(s[rnt]>=g[cnt])  
            {
                cnt++;rnt++;
            }  
            else rnt++;
        }  
        return cnt;
        
    }
};
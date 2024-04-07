class Solution {
public:
    string getSmallestString(string s, int k) {
        string ans=s;
        int curr=0;
        for(int i=0;i<s.size();i++)
        {
            for(char j='a';j<=s[i];j++)
            {
                int tmp=min(abs(s[i]-j),26-abs(s[i]-j));
                
                if(curr+tmp<=k)
                {
                    curr+=tmp;
                    ans[i]=j;
                    break;
                }
            }
        }
        
        return ans;
    }
};
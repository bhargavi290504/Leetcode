class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
      string res;
        set<int>se(spaces.begin(),spaces.end());
        for(int i=0;i<s.size();i++)
        {
            if(se.count(i))
            {
                res+=" ";
            } 
            res+=s[i];
        } 
        return res;
    }
};
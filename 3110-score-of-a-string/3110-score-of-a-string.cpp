class Solution {
public:
    int scoreOfString(string s) {
        int diff=0;
        for(size_t i=0;i<s.size()-1;i++)
        {
           int sum=abs(static_cast<int>(s[i])-static_cast<int>(s[i+1])); 
            diff+=sum;
        } 
        return diff;
    }
};
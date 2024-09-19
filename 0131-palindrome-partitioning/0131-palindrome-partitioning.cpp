class Solution {
public:  
    bool palindrome(const string &s,int start,int end)
    {
        while(start<end)
        {
            if(s[start]!=s[end])
            {
                return false;
                
            } 
            start++;
            end--;
        } 
        return true;
    } 
    void recursion(vector<vector<string>>& result,vector<string>&curr,const string &s,int start) 
    {
        if(start==s.size())
        {
            result.push_back(curr);
            return ;
                
        } 
        for(int i=start;i<=s.size();i++)
        
        {
            if( palindrome(s,start,i))
            {
                curr.push_back(s.substr(start,i-start+1));
                recursion(result,curr,s,i+1);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>curr;
        vector<vector<string>>result;
        recursion(result,curr,s,0); 
        return result;
    }
};
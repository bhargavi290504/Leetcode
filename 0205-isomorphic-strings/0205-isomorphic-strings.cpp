class Solution {
public:
    bool isIsomorphic(string s, string t) {
      map<char,char> mp;
        set<char> st;
        int n = s.size()-1;
        while(n>=0){
            if(mp.count(s[n]) && mp[s[n]] != t[n]){
                return false;
            }
            if( !mp.count(s[n]) && st.count(t[n])){
                return false;
            }
            st.insert(t[n]);
            mp[s[n]]=t[n];
            n--;
        }
        return true;
    }
};
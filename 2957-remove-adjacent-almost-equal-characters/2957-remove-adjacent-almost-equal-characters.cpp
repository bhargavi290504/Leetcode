class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int cnt=0;
        int n= word.length();
        int i=1;
        while(i<n)
        { 
         if(abs(word[i]-word[i-1])==1||word[i]==word[i-1])
         {
             cnt++;
             i=i+2;   
             continue;
         }  
            i++;
        }  
        return cnt;
    }
};
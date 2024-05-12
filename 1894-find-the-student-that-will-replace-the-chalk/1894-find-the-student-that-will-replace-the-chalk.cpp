class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
              long long aum=0;
        for(int i=0;i<chalk.size();i++)
        {
            aum+=chalk[i];
        }  
        k=k%aum;   
        for(int i=0;i<chalk.size();i++)
        {
            if(k<chalk[i])  return i;
            k-=chalk[i];
        } 
        return -1;
    }
};
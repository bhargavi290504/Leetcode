class Solution {
public:
    bool canAliceWin(int n) {
       int cnt=0;
        int stones=10;
        while(1)
        { 
            if(stones<=n) 
            {
            n-=stones;
            stones--;
            cnt++;  
            }
             else 
             {
                 break;
             }
            
        } 
        if(cnt%2==0) return false;
        return true;
    }
};
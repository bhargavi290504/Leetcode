class Solution {
public:
    int pivotInteger(int n) {    
       
        for(int i=1;i<=n;i++)
        {
             int right=0;
        int left=0;  
            for(int j=1;j<=i;j++) left+=j ;
            for(int k=i;k<=n;k++) right+=k;
            if(left==right) return i;
        }
        return -1;
    }
};
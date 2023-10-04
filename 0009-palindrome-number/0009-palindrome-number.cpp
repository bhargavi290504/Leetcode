class Solution {
public:
    bool isPalindrome(int x) { 
        long long num=x; long long result=0; 
        if(x<0) 
        {
            return false;
        }
        while(num!=0) 
        {
           int remainder=num%10;  
            result=result*10+remainder;
             
            num/=10;
        } 
        if(result==x) 
        {
            return true;
        } 
        else {
            return false;
        }
        
    } 
};
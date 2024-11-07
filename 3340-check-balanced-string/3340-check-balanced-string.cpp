class Solution {
public:
    bool isBalanced(string num) {
        bool ans=false;
        int es=0;
        int os=0;
        for(size_t i=0;i<num.size();i++)
        {
            int nums=num[i]-'0';
            if(i%2==0) es+=nums;
            else os+=nums;
            
        }  
        if(es==os) ans=true;
         return ans;
    } 
   
};
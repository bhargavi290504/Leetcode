class Solution {
public:
    int romanToInt(string s) {
        char symbol[7]={'I','V','X','L','C','D','M'};
        int value[7]={1,5,10,50,100,500,1000};
        int index=0;
        for(int i=0;i<7;i++)
        {
            if(s[0]==symbol[i])
            {
                index=i;
            }
        }
       int ans=value[index];
       int i=1;
        while(s[i]!='\0')
        {
            for(int j=0;j<7;j++)
            {
                if(s[i]==symbol[j])
                {
                    if(value[index]<value[j])
                    {
                        
                        ans=ans+value[j]-2*value[index];
                        
                    }
                    else
                    {
                        
                        ans=ans+value[j];
                    }
                    index=j;
                
                }
                
                
            }
            i++;
        }
        return ans;
    }
};
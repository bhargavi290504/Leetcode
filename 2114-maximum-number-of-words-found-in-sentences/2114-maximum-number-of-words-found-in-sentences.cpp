class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {   
       
        int ans=0;
        for(int i=0;i<sentences.size();i++)   
            
        {  
             int cnt=0;
            stringstream ss(sentences[i]);
            string t;
            while(ss>>t)
            {
                cnt++;
            }  
            ans=max(ans,cnt); 
        }  
        return ans;
        
    }
};
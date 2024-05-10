class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
     sort(potions.begin(),potions.end());
        vector<int>ans(spells.size());
        for(int i=0;i<spells.size();i++)
        {
            long long res=spells[i];
            int l=0;
            int r=potions.size()-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(res*potions[mid]>=success)
                {
                    r=mid-1;
                } 
                else l=mid+1;
            }  
            ans[i]=potions.size()-l;
        }  
        return ans;
    }
};
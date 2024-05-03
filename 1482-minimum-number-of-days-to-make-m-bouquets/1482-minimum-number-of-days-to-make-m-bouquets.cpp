class Solution {
public:   
    bool check(vector<int> &bloomDay,int day,int m,int k)
    {
        int cnt=0;
        int boq=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=day) cnt++;
            else 
            {
                boq+=(cnt/k);
                    cnt=0;
            }
        }  
        boq+=(cnt/k) ;
        return boq>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n = bloomDay.size(); 
        long long required = (long long)m * (long long)k;   
        if(required>n) return -1;
        int mini=INT_MAX; int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }  
        int l=mini; int h=maxi;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(check(bloomDay,mid,m,k)==true)  
            {
                h=mid-1;
            }  
            else l=mid+1;
        }
        return l;
    }
};
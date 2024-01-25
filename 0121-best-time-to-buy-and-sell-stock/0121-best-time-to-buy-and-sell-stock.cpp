class Solution {
public:
    int maxProfit(vector<int>& prices) {  
        int maxprop=0;
        int minprop=INT_MAX; 
        for(int i=0;i<prices.size();i++)
        {
            minprop=min(minprop,prices[i]);
            maxprop=max(maxprop,prices[i]-minprop);
        }   
        return maxprop;
    }
};
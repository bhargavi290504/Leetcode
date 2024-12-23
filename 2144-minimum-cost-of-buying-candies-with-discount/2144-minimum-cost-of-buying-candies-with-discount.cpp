class Solution {
public:
    int minimumCost(vector<int>& c) {
         sort(c.begin(),c.end());
        reverse(c.begin(),c.end()); 
        int sum=0;
        for(int i=0;i<c.size();i+=3) 
        {
        sum += c[i]; 
            if (i + 1 < c.size()) { 
                sum += c[i + 1]; 
            }
        } 
        return sum;
    }
};
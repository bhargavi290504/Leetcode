class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
          vector<int> area;
        int ans=0;
        for(int i=0;i<points.size();i++)
        
        {
            area.push_back(points[i][0]);
        }    
        sort(area.begin(),area.end());
        for(int j=1;j<area.size();j++)
        {
            if(area[j]-area[j-1]>ans)
            {
                ans=area[j]-area[j-1];
            }
        } 
        return ans;
    }
};
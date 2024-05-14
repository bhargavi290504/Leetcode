class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int maxi=INT_MIN;
       int secMaxi=INT_MIN;
       int mini=INT_MAX;
       int secMini=INT_MAX;

       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]>= maxi)
           {
               secMaxi=maxi;
               maxi=nums[i];
           }
           else if(secMaxi < nums[i] && nums[i] < maxi)
           {
               secMaxi=nums[i];
           }


           if(nums[i]<=mini)
           {
               secMini=mini;
               mini=nums[i];
           }
           else if(secMini > nums[i] && nums[i] > mini)
           {
               secMini=nums[i];
           }
       }
       return maxi*secMaxi - mini*secMini;
    }
};
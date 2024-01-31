class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {  
       vector <int>temp;
        int cnt1=0;int cnt2=0;
        int el1=INT_MIN;
        int el2= INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt1==0&&el2!=nums[i])
            {
                cnt1=1;
                el1=nums[i];
            }  
            else if(cnt2==0 && el1!=nums[i])
            {
                cnt2=1;
                el2=nums[i];
            }  
            else if(el1==nums[i]){cnt1++; } 
            else if(el2==nums[i])  {cnt2++;}  
            else {   
                cnt1--;cnt2--;
            }
         }  
        int cnt3=0;int cnt4=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==el1)
            {cnt3++ ;}
            if(nums[i]==el2) {cnt4++;}
        }    
        int min=(int) (nums.size()/3 )+1;
        if(cnt3>=min)
        {
            temp.push_back({el1});
        }  
        if(cnt4>=min)
        {
            temp.push_back({el2});
        }  
    return {temp};
    }
};
class Solution {
public:   
    int check(vector<int>& nums,int k)
    {
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            
            sum=sum+ceil((double) nums[i]/(double) k);
            
        }   
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1; int h=*max_element(nums.begin(),nums.end());
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(check(nums,mid)<=threshold)
            {
                h=mid-1;
            }  
            else l=mid+1;
        }  
        return l;
    }
};
class Solution {
public: 
   static bool compare(string a,string b)
    {
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) { 
        vector<string> num;
        for(int i=0;i<nums.size();i++)
        {
            num.push_back(to_string(nums[i]));
        } 
        sort(num.begin(),num.end(),compare);
    if(num[0]=="0")
    {
        return "0";
    } 
        string result;
        for(const auto&k:num)
        {
            result+=k;
        } 
        return result;
    }
};  
//  first manam compare function use chesi string ki convert cheska adhi sort chestadi for example 10 ,2 vundhi kada a+b=102 ,b+a=201  so ikkada b+a ekkuva kabati sort lo first 2 vostadi aa next 10 vostadi
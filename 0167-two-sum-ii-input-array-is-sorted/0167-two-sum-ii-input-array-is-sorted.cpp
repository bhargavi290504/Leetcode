class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {  
         vector<int>res;
        int i=0,j=numbers.size()-1;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                res={i+1,j+1};
                break;

            }
            else if(sum<target)i++;
            else j--;
        }





        return res;
        
    }
};
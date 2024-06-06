class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int> map;
         for(int num : hand){
             map[num]++;
         }
         while(map.size()!=0){
             int first = map.begin()->first;
             for(int i=first; i<first+groupSize; i++){
                 if(!map.count(i)){
                     return false;
                 }
                 map[i]--;
                 if(map[i]==0){
                     map.erase(i);
                 }
             }
         }
         return true;
    }
};
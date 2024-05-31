class Solution {
public:
    int maxProfit(vector<int>& prices) {
       if (prices.empty()) return 0;
    int firstBuy = INT_MIN, firstSell = 0;
    int secondBuy = INT_MIN, secondSell = 0;

    for (int price : prices) {
       firstBuy = std::max(firstBuy, -price);             
        firstSell = std::max(firstSell, firstBuy + price);  
        secondBuy = std::max(secondBuy, firstSell - price); 
        secondSell = std::max(secondSell, secondBuy + price); 
    }

    return secondSell;
    }
};
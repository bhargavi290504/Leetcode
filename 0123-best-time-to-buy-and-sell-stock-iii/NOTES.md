if (prices.empty()) return 0;
​
// Initialize the variables to track the maximum profit with up to two transactions
int firstBuy = INT_MIN, firstSell = 0;
int secondBuy = INT_MIN, secondSell = 0;
​
for (int price : prices) {
// Update the states in the order of first buy -> first sell -> second buy -> second sell
firstBuy = std::max(firstBuy, -price);              // Max profit after first buy
firstSell = std::max(firstSell, firstBuy + price);  // Max profit after first sell
secondBuy = std::max(secondBuy, firstSell - price); // Max profit after second buy
secondSell = std::max(secondSell, secondBuy + price); // Max profit after second sell
}
​
return secondSell;
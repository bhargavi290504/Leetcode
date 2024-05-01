class Solution {
public:
    string reversePrefix(string word, char ch) {  
    for (size_t i = 0; i < word.size(); i++) { 
            if (word[i] == ch) {
                string reversedPart = word.substr(0, i + 1); 
                string remainingPart = word.substr(i + 1); 
               reverse(reversedPart.begin(), reversedPart.end());
                return reversedPart + remainingPart;
            }
        } 
        return word;
    }
};
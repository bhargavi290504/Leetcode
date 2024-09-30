class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";

        while (word.length() < k) {
            string newpart = "";

            for (char c : word) {
                if (c == 'z') {
                    newpart += 'a';
                } else {
                    newpart += c + 1;
                }
            }
            word += newpart;
        }
        return word[k - 1];
    }
};
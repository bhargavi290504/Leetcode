class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        if (s.empty() || words.empty()) return res;
        
        int wordLen = words[0].size();
        int sLen = s.size();
        int numWords = words.size();
        int totalLen = numWords * wordLen;
        
        unordered_map<string, int> wordCount;
        for (const auto& word : words) {
            wordCount[word]++;
        }
        for (int offset = 0; offset < wordLen; ++offset) {
            unordered_map<string, int> currentCount;
            int start = offset;
            int end = offset;
            int count = 0;
            
            while (end + wordLen <= sLen) {
                string word = s.substr(end, wordLen);
                end += wordLen;
                
                if (wordCount.find(word) != wordCount.end()) {
                    currentCount[word]++;
                    count++;
                    
                    while (currentCount[word] > wordCount[word]) {
                        string leftWord = s.substr(start, wordLen);
                        currentCount[leftWord]--;
                        count--;
                        start += wordLen;
                    }
                    
                    if (count == numWords) {
                        res.push_back(start);
                    }
                } else {
                    currentCount.clear();
                    count = 0;
                    start = end;
                }
            }
        }
        
        return res;
    }
};
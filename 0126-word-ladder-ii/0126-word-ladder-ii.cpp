class Solution {
    unordered_set<string>wordSet;
    unordered_map<string, vector<string>>next;
    unordered_map<string, vector<string>>prev;
    vector<vector<string>>rets;
    string beginWord;
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        this->beginWord = beginWord;
        wordSet.insert(beginWord);
        
        for(auto s : wordList)
            wordSet.insert(s);
        
        if(wordSet.find(endWord) == wordSet.end())
            return {};
        
        for(auto s : wordSet){
            for(int k = 0; k < s.size(); k++){
                for(char ch = 'a'; ch <= 'z' ; ch++){
                    string t = s;
                    t[k] = ch;
                    if(t == s) continue;
                    if(wordSet.find(t)!= wordSet.end())  //in the wordSet
                        next[s].push_back(t);
                }
            }
        }
        unordered_set<string>visited;
        visited.insert(beginWord);
        queue<string>q;
        int flag = 0;
        q.push(beginWord);
        
        while(q.size() != 0){
            int len = q.size();
            unordered_set<string>newVisited;
            for(int i = 0; i < len; i++){
                string s = q.front();
                q.pop();
                for(auto nextStr : next[s]){
                    if(visited.find(nextStr) != visited.end())
                        continue;
                    prev[nextStr].push_back(s);
                    newVisited.insert(nextStr);
                    if(nextStr == endWord)
                        flag = 1;
                }
            }
            for(auto x : newVisited){
                visited.insert(x);
                q.push(x);
            }
            if(flag == 1)
                break;
        }
        if(flag == 0)
            return {};
        DFS(endWord, {endWord});
        return rets;
    }
    void DFS(string word, vector<string>path){
        if(word == beginWord){
            reverse(path.begin(), path.end());
            rets.push_back(path);
            return;
        }
        for(auto preStr : prev[word]){
            vector<string>newPath = path;
            newPath.push_back(preStr);
            DFS(preStr, newPath);
        }
    }
};
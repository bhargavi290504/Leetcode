class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails;
    for (string email : emails) {
        string local;
        string domain;
        bool ignore = false;

        for (char c : email) {
            if (c == '@') {
                domain = email.substr(email.find('@'));
                break;
            }
            if (c == '+') ignore = true;
            if (c != '.' && !ignore) local += c;
        }

        uniqueEmails.insert(local + domain);
    }
    return uniqueEmails.size();
    }
};
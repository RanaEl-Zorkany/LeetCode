class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int len = words.size();
        vector<string> result;
        unordered_set<string> resultSet;
        
        if(len == 1) return result;
        
        sort(words.begin(), words.end(), [](const string& a, const string& b) {
            return a.size() < b.size();
        });
        
        for (int i = 0; i < len; i++) {
            string sub = words[i];
            for (int j = i + 1; j < len; j++) {
                string str = words[j];
                if (str.find(sub) != string::npos && resultSet.find(sub) == resultSet.end()) {
                    result.push_back(sub);
                    resultSet.insert(sub);
                    break;
                }
            }
        }
        return result;
    }
};
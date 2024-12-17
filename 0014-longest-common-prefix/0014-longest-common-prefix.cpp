class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string base = strs[0];
        for(int i = 0; i < base.size(); i++){
            string prefix = base.substr(0, i + 1);
            for(int j = 1; j < strs.size(); j++){
                if(strs[j].find(prefix) != 0){
                    return base.substr(0, i);
                }
            }
        } 
        // Longest Common Prefix
        return base;
    }
};
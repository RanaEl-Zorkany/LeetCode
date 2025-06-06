class Solution {
public:
// groupAnagrams
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(int i=0; i<strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            mp[s].push_back(strs[i]);
        }
        for(auto m:mp){
            ans.push_back(m.second);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> lastPos(26);
        for(int i=0; i<s.size(); ++i) lastPos[s[i] - 'a'] = i;
        int start = 0, end = 0; 
        vector<int> ans;
        for(int i=0; i<s.size(); ++i){
            end = max(end, lastPos[s[i] - 'a']);
            if(end == i){
                ans.push_back(end - start + 1);
                start = i + 1;
            }
        }
        return ans;
    }
};
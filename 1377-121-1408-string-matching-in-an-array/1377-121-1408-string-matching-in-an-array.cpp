class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int len = words.size(), index = 0;
        vector<string> result;
        if(len == 1) return result;
        while(index < len){
            string sub = words[index];
            for(int i = 0; i < len; i++){
                if(index == i) continue;
                string str = words[i];
                if(str.find(sub) != string::npos) {
                    auto exist = find(result.begin(), result.end(), sub);
                    if(exist == result.end()) 
                        result.push_back(sub);
                }
                else continue;
            }
            index++;
        }
        return result;
    }
};
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int len = words.size(), cnt = 0;
        for(int i = 0; i < len; i++){
            if(words[i].find(pref) == 0) cnt++;
        }
        return cnt;
    }
};
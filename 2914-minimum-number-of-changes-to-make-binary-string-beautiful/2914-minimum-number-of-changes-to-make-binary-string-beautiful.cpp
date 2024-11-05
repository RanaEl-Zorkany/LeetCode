class Solution {
public:
    int minChanges(string s) {
        int cnt = 0;
        for (int i = 0, j = 1; j < s.size(); i+=2, j+=2)
            if(s[i] != s[j]) cnt++;
        return cnt;
    }
};
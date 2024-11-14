class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size(), cnt = 0;
        while(s[len - 1] == ' '){
            len--;
        }
        while(len--){
            if(s[len] == ' ') return cnt;
            else cnt++;
        }
        return cnt;
    }
};
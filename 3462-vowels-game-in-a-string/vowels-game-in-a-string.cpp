class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'u' || ch == 'o';
    }
    bool doesAliceWin(string s) {
        int vowelsNum = 0;
        for(auto ch:s){
            if(isVowel(ch)) return true;
        }
        return false;
    }
};
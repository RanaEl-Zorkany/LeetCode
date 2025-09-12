class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    bool doesAliceWin(string s) {
        int vowelsNum = 0;
        for(auto ch:s){
            if(isVowel(ch)) vowelsNum++;
        }
        return (vowelsNum) ? true:false;
    }
};
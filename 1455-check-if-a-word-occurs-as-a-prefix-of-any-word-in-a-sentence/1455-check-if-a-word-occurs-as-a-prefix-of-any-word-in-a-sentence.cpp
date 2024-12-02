class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string word = " " + searchWord;
        int pos = sentence.find(word), cnt = 1;
        for (int i = 0; i<=pos; i++){
            if(sentence[i] == ' ') cnt++;
            else continue;
        }
        int exist = 0;
        for (int i = 0; i < searchWord.size(); i++){
            if(sentence[i] == searchWord[i]) exist++;
        }
        if(exist == searchWord.size()) return 1;
        
        return (pos != string::npos) ? cnt : -1;
    }
};
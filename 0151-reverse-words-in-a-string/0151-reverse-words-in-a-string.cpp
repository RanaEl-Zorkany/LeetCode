class Solution {
public:
    string reverseWords(string s) {
        string sentence = "", word = "";
        vector<string> vc;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] != ' ')
                word += s[i];
            else{
                if (word != ""){
                    reverse(word.begin(), word.end());
                    sentence += word;
                    if(i != 0) sentence += " ";
                    word.clear();
                }
            }
        }
        reverse(word.begin(), word.end());
        sentence += word; 
        if(sentence[sentence.size()-1] == ' ')
            sentence.assign(sentence.begin(),sentence.end()-1);
        return sentence;
    }
};
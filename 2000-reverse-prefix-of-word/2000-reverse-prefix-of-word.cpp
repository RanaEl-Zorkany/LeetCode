class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos, nextPos;
        bool flag = false;
        for (int i = 0; i < word.size(); i++)
        {
            if(word[i] == ch)
            {
                flag = true;
                pos = i;
                nextPos = pos + 1;
                break;
            }
        }
        if(flag){
            string updatedWord = "";
            for (int i = pos; i >= 0; i--)
                updatedWord+=word[i];
            if (pos != word.size() - 1)
            {
                for (int i = nextPos; i < word.size(); i++)
                    updatedWord+=word[i];
            }
            return updatedWord;
        }
        else
        return word;
    }
};
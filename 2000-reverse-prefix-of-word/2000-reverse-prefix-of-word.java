class Solution {
    public String reversePrefix(String word, char ch) {
        int pos = 0, nextPos = 1;
        boolean flag = false;
        for (int i = 0; i < word.length(); i++)
        {
            if(word.charAt(i) == ch)
            {
                flag = true;
                pos = i;
                nextPos = pos + 1;
                break;
            }
        }
        if(flag){
            String updatedWord = "";
            for (int i = pos; i >= 0; i--)
                updatedWord+=word.charAt(i);
            if (pos != word.length() - 1)
            {
                for (int i = nextPos; i < word.length(); i++)
                    updatedWord+=word.charAt(i);
            }
            return updatedWord;
        }
        else return word;
    }
}
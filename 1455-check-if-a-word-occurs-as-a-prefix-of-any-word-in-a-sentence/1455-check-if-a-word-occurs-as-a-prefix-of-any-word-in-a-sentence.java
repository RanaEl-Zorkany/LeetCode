class Solution {
    public int isPrefixOfWord(String sentence, String searchWord) {
        if(sentence.length() < searchWord.length()) return -1;
        String word = " " + searchWord;
        int pos = sentence.indexOf(word), cnt = 1;
        for (int i = 0; i<=pos; i++){
            if(sentence.charAt(i) == ' ') cnt++;
            else continue;
        }
        int exist = 0;
        for (int i = 0; i < searchWord.length(); i++){
            if(sentence.charAt(i) == searchWord.charAt(i)) exist++;
            else continue;
        }
        if(exist == searchWord.length()) return 1;
        
        return (pos != -1) ? cnt : -1;
    }
}
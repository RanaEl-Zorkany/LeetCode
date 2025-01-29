class Solution {
    public String mergeAlternately(String word1, String word2) {
        int len = Math.min(word1.length(), word2.length());
        String merger = "";
        int i = 0;
        for (; i<len; i++){
            merger += word1.charAt(i);
            merger += word2.charAt(i);
        }
        for (; i<word1.length(); i++)
            merger += word1.charAt(i);
        for (; i<word2.length(); i++)
            merger += word2.charAt(i);
        return merger;
    }
}
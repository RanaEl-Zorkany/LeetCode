class Solution {
    public int prefixCount(String[] words, String pref) {
        int len = words.length, cnt = 0;
        for(int i = 0; i < len; i++){
            if(words[i].startsWith(pref)) cnt++;
        }
        return cnt;
    }
}
class Solution {
    public int lengthOfLastWord(String s) {
        int len = s.length(), cnt = 0;
        while(s.charAt(len - 1) == ' '){
            len--;
        }
        len--;
        while(len >= 0){
            if(s.charAt(len) == ' ') return cnt;
            else cnt++;
            len--;
        }
        return cnt;
    }
}
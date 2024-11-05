class Solution {
    public int minChanges(String s) {
        int cnt = 0;
        int i = 0, j = 1;
        for (; j < s.length(); i+=2, j+=2)
            if(s.charAt(i) != s.charAt(j)) cnt++;
        return cnt;
    }
}
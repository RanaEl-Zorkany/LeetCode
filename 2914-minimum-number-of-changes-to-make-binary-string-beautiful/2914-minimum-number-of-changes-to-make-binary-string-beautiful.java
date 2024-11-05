class Solution {
    public int minChanges(String s) {
        int cnt = 0;
        int i = 0;
        for (; i < s.length(); i+=2)
            if(s.charAt(i) != s.charAt(i+1)) cnt++;
        return cnt;
    }
}
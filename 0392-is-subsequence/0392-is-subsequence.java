class Solution {
    public boolean isSubsequence(String s, String t) {
        int base = 0, size = t.length();
        if(s.length() < 1) return true;
        for (int i = 0; i < size && base < s.length(); i++){
            if (s.charAt(base) == t.charAt(i))
                base++;
        }
        return (base == s.length()) ? true : false;
    }
}
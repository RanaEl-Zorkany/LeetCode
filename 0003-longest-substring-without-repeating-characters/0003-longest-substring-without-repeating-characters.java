class Solution {
    public int lengthOfLongestSubstring(String s) {
        int len = s.length();
        if (len <= 1) return len;

        HashSet<Character> st = new HashSet<>();
        int maxx = 0, i = 0;  

        for (int j = 0; j < len; j++) {  
             while (st.contains(s.charAt(j))) {
                st.remove(s.charAt(i));
                i++; 
            }
            st.add(s.charAt(j));
            maxx = Math.max(maxx, j - i + 1);
        }

        return maxx;
    }
}
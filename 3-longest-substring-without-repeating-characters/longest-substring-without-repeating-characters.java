class Solution {
    public int lengthOfLongestSubstring(String s) {
        int size = s.length();
        if(size < 2) return size;
        if (size == 2){
            return (s.charAt(0) == s.charAt(1)) ?  1 : 2;
        }

        int ans = 0, start = 0, end = 0;
        Set<Character> sub = new HashSet<>();
        
        while(size > end){
            if(!sub.contains(s.charAt(end))){
                sub.add(s.charAt(end));
                ans = Math.max(ans, end - start + 1);
                end++;
            }
            else{
                sub.remove(s.charAt(start));
                start++;
            }
        }
        return ans;
    }
}
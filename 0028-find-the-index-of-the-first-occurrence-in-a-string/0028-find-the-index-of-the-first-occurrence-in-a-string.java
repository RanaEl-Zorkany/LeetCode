class Solution {
    public int strStr(String haystack, String needle) {
        int i = 0, j = 0, cnt = 0, index = 0;
        while(i<haystack.length()){
            if(haystack.charAt(i) == needle.charAt(j)){
                cnt++; j++; i++;
                if (cnt == 1)
                    index = i;
                if (cnt == needle.length())
                    return i - needle.length();

            }
            else if (cnt > 0){
                i = index;
                cnt = 0; j = 0;
            }
            else {
                j = 0;
                cnt = 0;
                i++;
            }
        }
        return -1;
    }
}
class Solution {
    public int countPrefixSuffixPairs(String[] words) {
        int len = words.length, cnt = 0;
        if (len == 1) return 0;
        for(int i = 0; i < len; i++){
            String str1 = words[i];
            for(int j = i + 1; j < len; j++){
                String str2 = words[j];
                if(str2.startsWith(str1) && str2.endsWith(str1)) cnt++;
            }
        }
        return cnt;
    }
}
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs.length == 0) return "";
        
        String base = strs[0];
        for(int i = 0; i < base.length(); i++){
            String r = base.substring(0, i + 1);
            for(int j = 1; j < strs.length; j++){
                if(!strs[j].startsWith(r)){
                    return base.substring(0, i);
                }
            }
        }
        return base;
    }
}
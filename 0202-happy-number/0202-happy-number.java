class Solution {
    public boolean isHappy(int n) {
        if (n == 1)
            return true;

        else{
            int it = 100;
            while (it >= 0){
                String string_num = Integer.toString(n);
                int squared = 0;
                int len = string_num.length();
                for(int i = 0; i<len; i++){
                    squared += Math.pow(Integer.parseInt(String.valueOf(string_num.charAt(i))), 2);
                }
                n = squared;
                if (n == 1)
                    return true;
                it--;
            }
        }
        return n == 1;
    }
}
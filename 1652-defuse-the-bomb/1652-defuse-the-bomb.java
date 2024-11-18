class Solution {
    public int[] decrypt(int[] code, int k) {
        int len = code.length;
        int[] result = new int[len];
        if(k == 0) return result;
        for(int i = 0; i < len; i++){
            int sum = 0;
            if (k > 0){
                for(int j = i+1; j < i + k + 1; j++){
                    sum += code[j % len];
                }
                result[i] = sum;
            }
            else{
                int cnt = 0;
                for(int j = i-1; cnt > k; j--){
                    sum += code[(j + len) % len];
                    cnt--;
                }
                result[i] = sum;
            }
        }
        return result;
    }
}
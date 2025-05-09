class Solution {
    public String addBinary(String a, String b) {
        String ans = ""; int remainder = 0;
        if(a.length() < b.length()) {
            String temp = a;
            a = b;
            b = temp;
        }
        a = new StringBuilder(a).reverse().toString();
        b = new StringBuilder(b).reverse().toString();
        for(int i=b.length(); i<a.length(); i++) b += '0';
        for(int i=0; i<a.length(); ++i){
            if(a.charAt(i) == '1' && b.charAt(i) == '1'){
                if(remainder == 0) ans += '0';
                else ans += '1';
                remainder = 1;
            }
            else if((a.charAt(i) == '0' && b.charAt(i) == '1') || (a.charAt(i) == '1' && b.charAt(i) == '0')){
                if(remainder == 0) ans += '1';
                else ans += '0';
            }
            else if(a.charAt(i) == '0' && b.charAt(i) == '0'){
                if(remainder == 0) ans += '0';
                else ans += '1';
                remainder = 0;
            }
        }
        if(remainder == 1) ans += '1';
        ans = new StringBuilder(ans).reverse().toString();
        return ans;
    }
}
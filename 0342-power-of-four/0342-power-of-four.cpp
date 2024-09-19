class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) return true;
        if (n < 4) return false; 
        while (n % 4 == 0) {
            // if (n >= 4)
                n /= 4; 
            // else return false;
        }
        return (n == 1);
        
        // double x = log10(n)/log10(4);
        // int res = x/1;
        // return (x==res) ? true : false;
    }
};
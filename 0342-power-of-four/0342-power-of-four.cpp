class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false; 
//         while (n % 2 == 0) n /= 4;
//         return (n == 1);
        
        double x = log10(n)/log10(4);
        int res = x/1;
        return (x==res) ? true : false;
    }
};
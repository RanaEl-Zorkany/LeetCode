class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<=0) return false;
        double x = log10(n)/log10(2);
        int res = x/1;
        return (x==res) ? true : false;
    }
};
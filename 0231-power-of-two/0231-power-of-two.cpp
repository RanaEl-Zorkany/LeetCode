class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<=0) return false;
        double x = log10(n)/log10(2);
        int res = (int)x;
        return (x==res) ? true : false;
    }
};
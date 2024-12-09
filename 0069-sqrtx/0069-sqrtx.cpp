class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        
        int start = 1, end = x;
        long long mid;
        while (start <= end){
            mid = start + (end - start) / 2;
            if(mid * mid == x) return mid;
            else if (mid * mid < x) start = ++mid;
            else end = --mid;
        }
        return end;
    }
};
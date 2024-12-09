class Solution {
    public int mySqrt(int x) {
        if (x <= 1) return x;
        
        long start = 1l, end = (long)x, mid = 1l;
        while (start <= end){
            mid = start + (end - start) / 2;
            if(mid * mid == x) return (int)mid;
            else if (mid * mid < x) start = mid + 1;
            else end = mid - 1;
        }
        return (int)end;
    }
}
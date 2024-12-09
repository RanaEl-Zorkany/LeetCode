class Solution {
    public int mySqrt(int x) {
        if (x <= 1) return x;
        
        int start = 1, end = x; 
        long mid = 1l;
        while (start <= end){
            mid = start + (end - start) / 2;
            if(mid * mid == x) return (int)mid;
            else if (mid * mid < x) start = (int)mid + 1;
            else end = (int)mid - 1;
        }
        return end;
    }
}
class Solution {
    public double myPow(double x, int n) {
        if(x == 0) return 0;
        if (n == 0) return 1; 
        if (n < 0) return myPow(1 / x, (n+1)*-1) * (1 / x);
        
        double half = myPow(x, n / 2); 
        if (n % 2 == 0)
            return half * half;
        else 
            return half * half * x;
    }
}
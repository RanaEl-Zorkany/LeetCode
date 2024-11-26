class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {
        int newNum = num, ans = 0; 
        while(newNum){
            ans = ans + (newNum % 10);
            newNum = newNum / 10;
        }
        num = ans;
        }
        return num;
    }
};
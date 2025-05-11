class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int odd = 0;
        for(int num:arr){
            if(num % 2 == 1) odd++;
            else odd = 0;
            if(odd == 3) return true;
        }
        return false;
    }
};
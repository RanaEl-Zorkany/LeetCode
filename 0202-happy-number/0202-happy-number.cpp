class Solution {
public:
    bool isHappy(int n) {
        if (n == 1)
            return true;

        else{
            int it = 100;
            while (it--){
                string string_num = to_string(n);
                int squared = 0;
                for(int i = 0; i<string_num.size(); i++){
                    squared += pow(string_num[i]-'0',2);
                }
                n = squared;
                if (n == 1)
                    return true;
            }
        }
        return n == 1;
    }
};
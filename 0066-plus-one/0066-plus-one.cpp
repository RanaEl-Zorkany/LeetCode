class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size() - 1;
        if(digits[size] != 9){
            digits[size]+=1;
            return digits;
        }
        reverse(digits.begin(), digits.end());
        digits[0] = 0;
        int i = 1;
        for(; i <= size; i++){
            if(digits[i] != 9){
                digits[i]+=1;
                break;
            }
            else{
                 digits[i] = 0;
            }
            
        }
        if(i == size+1){
            digits.push_back(1);
        }
        
        reverse(digits.begin(), digits.end());
        return digits;
    }
};
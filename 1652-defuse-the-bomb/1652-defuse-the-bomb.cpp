class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int len = code.size();
        vector<int> result(len, 0);
        if(k == 0) return result;
        for(int i = 0; i < len; i++){
            int cnt = 0, sum = 0;
            if (k > 0){
                for(int j = i+1; cnt < k; j++){
                    sum += code[j % len];
                    cnt++;
                }
                result[i] = sum;
            }
            else{
                for(int j = i-1; cnt > k; j--){
                    sum += code[(j + len) % len];
                    cnt--;
                }
                result[i] = sum;
            }
        }
        return result;
    }
};
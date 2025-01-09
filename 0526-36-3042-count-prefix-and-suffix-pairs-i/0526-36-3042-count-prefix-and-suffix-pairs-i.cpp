class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int len = words.size(), cnt = 0;
        string str1, str2;
        
        if (len == 1) return 0;
        
        for(int i = 0; i < len; i++){
            str1 = words[i];
            for(int j = i + 1; j < len; j++){
                str2 = words[j];
                if(str2.find(str1) == 0 && str2.compare(str2.size() - str1.size(), str1.size(), str1) == 0) 
                    cnt++;
            }
        }
        return cnt;
    }
};
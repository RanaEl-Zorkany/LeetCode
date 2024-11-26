class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0, cnt = 0, index;
        while(i<haystack.size()){
            if(haystack[i] == needle[j]){
                cnt++; j++; i++;
                if (cnt == 1)
                    index = i;
                if (cnt == needle.size())
                    return i - needle.size();

            }
            else if (cnt > 0){
                i = index;
                cnt = 0; j = 0;
            }
            else {
                j = 0;
                cnt = 0;
                i++;
            }
        }
        return -1;
    }
};
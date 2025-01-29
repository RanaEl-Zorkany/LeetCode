class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len = min(word1.size(), word2.size());
        string merger;
        int i = 0;
        for (; i<len; i++){
            merger += word1[i];
            merger += word2[i];
        }
        for (; i<word1.size(); i++)
            merger += word1[i];
        for (; i<word2.size(); i++)
            merger += word2[i];
        return merger;
    }
};
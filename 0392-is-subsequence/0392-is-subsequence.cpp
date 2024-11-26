class Solution {
public:
    bool isSubsequence(string s, string t) {
        int base = 0, size = t.size();
        for (int i = 0; i < size; i++)
        {
            if (s[base] == t[i]) {
                base++;
            }
        }
        return (base == s.size()) ? true : false;
    }
};
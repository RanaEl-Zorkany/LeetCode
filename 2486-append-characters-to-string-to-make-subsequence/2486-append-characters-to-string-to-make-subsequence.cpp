class Solution {
public:
    int appendCharacters(string s, string t) {
        int it = 0, itt = 0;
        while (it < s.size() && itt < t.size())
        {
            if(s[it] == t[itt]) {it++, itt++;}
            else it++;
        }
        return (t.size() - itt);
    }
};
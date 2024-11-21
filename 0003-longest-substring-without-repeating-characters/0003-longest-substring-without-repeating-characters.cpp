class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size();
        if (len <= 1) return len;

        set<char> st;
        int maxx = 0, i = 0;  

        for (int j = 0; j < len; j++) {  
            while (st.find(s[j]) != st.end()) {
                st.erase(s[i]);
                i++;  
            }
            st.insert(s[j]);
            maxx = max(maxx, j - i + 1);
        }

        return maxx;
    }
};
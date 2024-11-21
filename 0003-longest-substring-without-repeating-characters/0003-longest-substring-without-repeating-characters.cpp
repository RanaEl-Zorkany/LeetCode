class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size() , maxx = 1;
        if(len <= 1) return len;
        if (len == 2){
            return (s[0] == s[1]) ?  1 : 2;
        } 
        set<char> st;
        for(int i = 0, j = 1; i < len && j < len;){
            if(st.size() == 0)
                st.insert(s[i]);
            if(!st.contains(s[j])){
                st.insert(s[j]);
                j++;
            }
            else{
                st.clear();
                i++;
                j=i+1;
            }
            int size = st.size();
            maxx = max(maxx, size);
        }
        return maxx;
    }
};
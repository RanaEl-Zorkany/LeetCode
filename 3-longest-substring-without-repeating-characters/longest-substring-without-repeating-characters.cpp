class Solution {
public:
// ds
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        if(size < 2) return size;
        if (size == 2){
            return (s[0] == s[1]) ?  1 : 2;
        }
        unordered_set<char> sub;
        int ans = 0, start = 0, end = 0;
        while(size > end){
            if(!sub.count(s[end])){
                sub.insert(s[end]);
                ans = max(ans, end - start + 1);
                end++;
            }
            else{
                sub.erase(s[start]);
                start++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (end + 1 == 1) return true;
        while (start<=end)
        {
            if (isalnum(s[start]) && isalnum(s[end])) {
                if (s[start] == s[end])
                {
                    start++;
                    end--;
                }
                else
                    return false;
            }
            else if (!isalnum(s[start]))
                start++;
            else if (!isalnum(s[end]))
                end--;
        }
        return true;
    }
};
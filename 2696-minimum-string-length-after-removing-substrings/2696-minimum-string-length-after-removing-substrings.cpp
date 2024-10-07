class Solution {
public:
    int minLength(string s) {
        stack<char> stc;
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            if(stc.empty()){
                stc.push(s[i]);
            } else if(s[i] == 'B' && stc.top() == 'A'){
                stc.pop();
            } else if(s[i] == 'D' && stc.top() == 'C'){
                stc.pop();
            } else {
                stc.push(s[i]);
            }
        }
        return stc.size();
    }
};
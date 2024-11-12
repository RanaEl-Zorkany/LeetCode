class Solution {
public:
    bool isValid(string s) {
        stack<char> stc;
        int len = s.size();
        if (len <= 1) return false;
        for(char ch:s){
            if(ch == '(' || ch == '[' || ch == '{')
                stc.push(ch);
            else{
                if (stc.empty()) return false;
                if ((stc.top() == '(' && ch != ')') ||
                    (stc.top() == '[' && ch != ']') || 
                    (stc.top() == '{' && ch != '}'))
                        return false;
                stc.pop();
            }
        }
        return stc.empty();
    }
};
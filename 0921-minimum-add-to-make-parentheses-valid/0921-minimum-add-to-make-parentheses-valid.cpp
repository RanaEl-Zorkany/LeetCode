class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> parenthesis;
        for (int i = 0; i < s.size(); i++)
        {
            if(parenthesis.empty())
               parenthesis.push(s[i]);
            else if(s[i] == ')' && parenthesis.top() == '('){
                parenthesis.pop();
            } 
            else parenthesis.push(s[i]);
        }
        return parenthesis.size();
    }
};
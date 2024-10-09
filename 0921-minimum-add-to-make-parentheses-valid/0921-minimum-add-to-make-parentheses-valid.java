class Solution {
    public int minAddToMakeValid(String s) {
        Stack<Character> parenthesis = new Stack<>();
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s.charAt(i);
            if(parenthesis.empty())
            {
                parenthesis.push(ch);
            }
            else if(ch == ')' && parenthesis.peek() == '('){
                parenthesis.pop();
            } 
            else parenthesis.push(ch);
        }
        return parenthesis.size();
    }
}
class Solution {
    public int minAddToMakeValid(String s) {
        Stack<Character> parenthesis = new Stack<>();
        int size = s.length() - 1;
        for (int i = 0; i <= size; i++)
        {
            char ch = s.charAt(i);
            if(parenthesis.empty())
                parenthesis.push(ch);
            else if(ch == ')' && parenthesis.peek() == '('){
                parenthesis.pop();
            } 
            else parenthesis.push(ch);
        }
        return parenthesis.size();
    }
}
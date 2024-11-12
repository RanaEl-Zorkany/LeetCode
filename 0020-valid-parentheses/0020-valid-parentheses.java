class Solution {
    public boolean isValid(String s) {
        Stack<Character> stc = new Stack<>();
        for (char ch : s.toCharArray()){
            if(ch == '(' || ch == '[' || ch == '{')
                stc.push(ch);
            else{
                if (stc.empty()) return false;
                if ((stc.peek() == '(' && ch != ')') ||
                    (stc.peek() == '[' && ch != ']') || 
                    (stc.peek() == '{' && ch != '}'))
                        return false;
                stc.pop();
            }
        }
        return stc.isEmpty();
    }
}
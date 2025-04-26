class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> stk;
        int res = 0;
        for(string op:tokens){
            if(op == "+" || op == "-" || op == "*" || op == "/"){
                string str = stk.top();
                stk.pop();
                int num1 = stoi(str);
                str = stk.top();
                stk.pop();
                int num2 = stoi(str);
                     if(op == "+") stk.push(to_string(num2+num1));
                else if(op == "-") stk.push(to_string(num2-num1));
                else if(op == "*") stk.push(to_string(num2*num1));
                else if(op == "/") stk.push(to_string(num2/num1));
            }
            else stk.push(op);
        }
        return stoi(stk.top());
    }
};
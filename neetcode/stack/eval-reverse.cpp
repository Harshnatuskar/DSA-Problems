class Solution {
public:
    bool isOperator(const string& token) {
        return token == "+" || token == "-" || token == "*" || token == "/";
    } 
	
    int evalRPN(vector<string>& tokens) {
        std::stack<int> op;
        
        for (const string& token : tokens) {
            if (isOperator(token)) {
                int op2 = op.top();
                op.pop();
                int op1 = op.top();
                op.pop();
                
                int r = operation(op1, op2, token);
                op.push(r);
            } else {
                op.push(stoi(token));
            }	
        }
        
        return op.top();
    }
    
    int operation(int op1, int op2, const string& ops) {
        if (ops == "+") return op1 + op2;
        if (ops == "-") return op1 - op2;
        if (ops == "*") return op1 * op2;
        if (ops == "/") return op1 / op2;
        return 0; 
    } 
};

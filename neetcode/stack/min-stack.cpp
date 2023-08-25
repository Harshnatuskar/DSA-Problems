class MinStack {
public:
    stack<int> minStack;
    stack<int> elements;
    MinStack() {
        
    }
    
    void push(int val) {
        elements.push(val);
        if(minStack.empty() || val <= minStack.top()){
        	minStack.push(val);
        }
    }
    
    void pop() {
        if(elements.top() == minStack.top()){
        	minStack.pop();
        }
        
        elements.pop();
    }
    
    int top() {
        return elements.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

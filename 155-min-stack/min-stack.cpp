class MinStack {
public:
    stack<int> my_stack,mini;
    void push(int val) {
        my_stack.push(val);
        if(mini.size()==0 || val<= mini.top()){
            mini.push(val);
        }
    }
    
    void pop() {
        if(mini.top()==my_stack.top()){
            mini.pop();
        }
        my_stack.pop();
    }
    
    int top() {
        return my_stack.top();
    }
    
    int getMin() {
        return mini.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
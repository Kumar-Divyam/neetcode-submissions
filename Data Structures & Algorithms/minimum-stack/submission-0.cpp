class MinStack {
private:
    stack<int> stk; 
    stack<int> minm;

public:
    MinStack() {
        minm.push(INT_MAX);
    }
    
    void push(int val) {
        int minimum = min(minm.top(),val);
        minm.push(minimum);
        stk.push(val);
    }
    
    void pop() {
        stk.pop();
        minm.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minm.top();
    }
};

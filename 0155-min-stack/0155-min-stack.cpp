class MinStack {
    vector<int> v;
    vector<int> mn;
public:
    MinStack() {
    }
    
    void push(int value) {
        v.push_back(value);
        if(mn.empty() || value <= mn.back())
            mn.push_back(value);
    }
    
    void pop() {
        int n = v.back();
        v.pop_back();
        if(n == mn.back()) mn.pop_back();
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return mn.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
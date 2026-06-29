class MinStack {
    
public:
   stack <int> main;
    stack <int> mini;
    MinStack() {
        
    }
    
    void push(int val) {
        main.push(val);
        if(mini.empty() || val<=mini.top()){
            mini.push(val);
        }
        
    }
    
    void pop() {
        if(mini.top() == main.top()){
            mini.pop();
        }
        main.pop();
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return mini.top();
    }
};

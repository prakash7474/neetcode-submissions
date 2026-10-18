class MinStack {
private:
    stack<int> s;
    stack<int> min;    
public:
    MinStack() {}
    
    
    void push(int val) {
        s.push(val);
        if(min.empty()|| val<=min.top()){
           min.push(val); 
        }else{
            min.push(min.top());
        }

    }
    
    void pop() {
        s.pop();
        min.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min.top();
    }
};

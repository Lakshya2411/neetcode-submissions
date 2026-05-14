class MinStack {
public:
stack<int>minst;
stack<int>st;
    MinStack() {
        
        
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty()||val<=minst.top()){
            minst.push(val);
        }
        
    }
    
    void pop() {
        
        if(st.top()==minst.top()){
            minst.pop();
        }
        st.pop();
        
    }
    
    int top() {
        return st.top();
    }

    int getMin() {
        return minst.top();
    }
};

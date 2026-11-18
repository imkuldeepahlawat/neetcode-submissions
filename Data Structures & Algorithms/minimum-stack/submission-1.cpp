class MinStack {
    stack<int> st;
    stack<int> min_st;
public:
    MinStack() {
    }
    
    void push(int val) {        
        st.push(val);
        if(min_st.empty()) min_st.push(val);
        else{
           int min_val = min(val,min_st.top());
            min_st.push(min_val);
        }
    }
    
    void pop() {
        st.pop();
        min_st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};

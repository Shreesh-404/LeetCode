class MinStack {
public:
    vector<int> st;
    int min = INT_MAX;
    MinStack() {
    }
    
    void push(int value) {
        st.push_back(value);
        if(value < min) min = value;
    }
    
    void pop() {
        st.pop_back();
        min = INT_MAX;
        for (int i = 0; i < st.size(); i++)
        {
            if(st[i] < min) min = st[i];
        }
    }
    
    int top() {
        return st[st.size()- 1];
    }
    
    int getMin() {
        return min;
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
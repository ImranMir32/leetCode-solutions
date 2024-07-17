class MinStack {
public:
    stack<long long>st;
    long long min;
    MinStack() { 
        min=LLONG_MAX;
    }
    
    void push(int val) {
        long long x=(long long)val;
        if(st.size()==0){
            st.push(x);
            min=x;
        } 
        else if(x >= min) st.push(val);
        else{
            st.push(2*x-min);
            min=x;
        }
    }
    
    void pop() {
        if(st.top()<min){ // it means that a fake value is present 
            long long oldMin=2*min-st.top(); // retrieve the old minimum
            min=oldMin;
        }
        st.pop();
    }

    int top() {
        if(st.top()<min) return (int)min;
        else return (int)st.top();
    }
    
    int getMin() {
        return (int)min;
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
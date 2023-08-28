class MyStack {
public:
    queue<int>q;
    MyStack() {
       
    }
    
    void push(int x) {
        queue<int>q2;
        q2.push(x);
        while(!q.empty()){
            q2.push(q.front());
            q.pop();
        }
        swap(q,q2);
    }
    
    int pop() {
        int pop=q.front();
        q.pop();
        return pop;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
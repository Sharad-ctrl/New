class MyStack {
public:
queue<int>q;
queue<int>helper;
    MyStack() {
      
    }
    
    void push(int x) {
        while(q.size()>0){
            helper.push(q.front());
            q.pop();
        }
        q.push(x);
        while(helper.size()>0){
            q.push(helper.front());
            helper.pop();
        }
    }
    
    int pop() {
        if(q.size() == 0) return -1;
       int x = q.front();
        q.pop();
        return x;;
       
    }
    
    int top() {
        if(q.size() == 0) return -1;
        return q.front();
        
    }
    
    bool empty() {
        if(q.size() == 0) return true;
        else return false;
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
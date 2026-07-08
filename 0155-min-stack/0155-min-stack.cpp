class MinStack {
public:

vector<int>v;
vector<int>check;
    int mn ;
    MinStack() {
        mn = INT_MAX;
    }
    
    void push(int value) {
        v.push_back(value);
        if(mn>=value) {
            mn = value;
            check.push_back(mn);
        }

    }
    
    void pop() {
       
        if( v[v.size()-1] == check[check.size()-1]){
            check.pop_back();
           if(check.empty())
            mn = INT_MAX;
            else
            mn = check.back();
        }
         v.pop_back();
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    int getMin() {
        if(v.size() == 0) return -1; 
        return check[check.size()-1];
    }
};

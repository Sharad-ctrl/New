class Solution {
public:
    void operation(stack<string>& st , string s){
            int x = stoi(st.top());
            st.pop();
            int y = stoi(st.top());
            st.pop();
            int ans;
        if(s == "+") ans = y+x;
        else if(s == "-") ans = y-x;
        else if(s == "*") ans = y*x;
        else if(s == "/") ans = y/x;
        st.push(to_string(ans));
    return;
    }
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<string>st;
        for(int i=0;i<n;i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                    operation(st , tokens[i]);
            }
            else st.push(tokens[i]);
        }
        int ans = stoi(st.top());
        return ans;
    }
};
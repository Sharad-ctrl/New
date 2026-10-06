class Solution {
public:
    int minAddToMakeValid(string s) {
          stack<char>st;
          int count = 0;
          for(int i=0;i<s.size();i++){
            if(s[i] == ')' ){
                if(st.size() != 0 && st.top() == '(')  st.pop();
                else count++;
            }
            if(s[i] == '(') st.push(s[i]);
          }
          int n = st.size();
          return count + n;
    }
};
class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int>st;
        for(int i=0;i<sentence.size();i++){
            st.insert(sentence[i]);
        }
        int n = st.size();
        if(n < 26) return false;
        else return true;
    }
};
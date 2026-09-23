class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int>st;
        for(int i=0;i<sentence.size();i++){
            st.insert(sentence[i]);
        }
        return(st.size() == 26);
    }
};
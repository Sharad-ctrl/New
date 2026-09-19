class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n = s.size();
        bool flag = true;
        for(int i=0;i<n-1;i++){
            if(s[i]>s[i+1]) {
                if(s[i] - s[i+1] >2) flag = false;
            }
            if(s[i]<s[i+1]) {
                if(s[i+1] - s[i] >2) flag = false;
            }
        }
        if(flag == false) return false;
        else return true;
    }
};